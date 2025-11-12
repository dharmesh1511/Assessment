attendance_records = [] 

def mark_attendance():
    print("\n--- Mark Attendance ---")
    roll = input("Enter Roll Number: ")
    name = input("Enter Student Name: ")
    course = input("Enter Course Name: ")
    date = input("Enter Date (DD-MM-YYYY): ")
    status = input("Present or Absent (P/A): ")

    # Validate inputs
    if status not in ["P", "A"]:
        print("Invalid input! Use 'P' for Present or 'A' for Absent.")
        return

    # Check duplicate entry (same roll + date)
    for record in attendance_records:
        if record["roll"] == roll and record["date"] == date:
            print("Attendance for this student on this date is already marked!")
            return

    # Save record
    record = {
        "roll": roll,
        "name": name,
        "course": course,
        "date": date,
        "status": status
    }
    attendance_records.append(record)
    print(f"Attendance marked for {name} on {date}")

def show_full_report():
    print("\n--- Full Attendance Report ---")
    if not attendance_records:
        print("No attendance records found!")
        return

    print(f"{'Roll':<10}{'Name':<20}{'Course':<15}{'Date':<12}{'Status'}")
    print("-" * 65)
    for rec in attendance_records:
        print(f"{rec['roll']:<10}{rec['name']:<20}{rec['course']:<15}{rec['date']:<12}{rec['status']}")

def student_report():
    print("\n--- Individual Student Report ---")
    roll = input("Enter Student Roll Number: ").strip()

    student_records = [r for r in attendance_records if r["roll"] == roll]

    if not student_records:
        print("No records found for this student!")
        return

    total_days = len(student_records)
    present_days = 0
    for r in student_records:
        if r["status"] == "P":
            present_days += 1

    percentage = (present_days / total_days) * 100

    print(f"\nReport for Roll No: {roll}")
    print(f"Total Days: {total_days}")
    print(f"Days Present: {present_days}")
    print(f"Days Absent: {total_days - present_days}")
    print(f"Attendance %: {percentage}%")

    if percentage < 75:
        print("Status: Defaulter (Less than 75%)")
    else:
        print("Status: Regular")

def main():
    while True:
        print("1. Mark Attendance")
        print("2. Show Full Attendance Report")
        print("3. Show Student Report")
        print("4. Exit")

        choice = input("Enter your choice (1-4): ").strip()

        if choice == "1":
            mark_attendance()
        elif choice == "2":
            show_full_report()
        elif choice == "3":
            student_report()
        elif choice == "4":
            print("Exiting EduTrack... Have a nice day!")
            break
        else:
            print("Invalid choice! Please try again.")

main()
