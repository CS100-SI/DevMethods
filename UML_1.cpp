class Patient;

class Doctor {
private:
    std::string m_name{};
    std::vector<std::reference_wrapper<const Patient>> m_patient{};

public:
    Doctor(const std::string& name) : m_name(name) { }
    void addPatient(Patient& patient);
    friend std::ostream& operator<<(std::ostream& out, const Doctor& doctor);
    const std::string& getName() const { return m_name; }
};

class Patient {
private:
    std::string m_name{};
    std::vector<std::reference_wrapper<const Doctor>> m_doctor;

    void addDoctor(const Doctor& doctor) {
        m_doctor.push_back(doctor);
    }
public:
    Patient(const std::string& name) : m_name(name)    { }
    friend std::ostream& operator<<(std::ostream& out, const Patient& patient);
    const std::string& getName() const { return m_name; }
    friend void Doctor::addPatient(Patient& patient);
};