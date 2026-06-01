# CPU Temperature Monitoring System (Version 1.1)

A lightweight C program designed to log, monitor, and analyze CPU core temperatures. This application categorizes real-time temperature logs into specific thermal states, calculates essential statistical metrics, and provides a final system health summary.

Developed by Team **kata Arkan namanya AMBACODING 100% Halal jadi kita iyain ajah** for the Informatics (End of Year Summative) High School Curriculum.

---

## 🚀 Features

* **Real-time Thermal Diagnosis:** Categorizes every temperature entry instantly:
  * 🔴 **Overheat Danger** (`≥ 85.0 °C`)
  * 🟢 **Normal Threshold** (`40.0 °C` to `< 85.0 °C`)
  * 🔵 **Temperature Too Low** (`< 40.0 °C`)
* **Dynamic Peak Value Tracking (Added 1.1):** Identifies the maximum and minimum temperatures recorded during the session.
* **Aggregated Thermal Report (Added 1.1):** Generates a comprehensive status summary calculating total counts for each thermal state.
* **Safe Input Guard:** Includes defensive validation logic to catch invalid data points or null checks before loop initialization.

---

## 🛠️ How It Works

1. **Initialization:** The user specifies how many temperature checks (`jumlah_log`) they want to perform.
2. **Interactive Loop:** A `while` loop runs sequentially to prompt user entries for each log instance.
3. **Continuous Analysis:** The program updates global variables tracking arithmetic sums, extrema values, and state counts.
4. **Summary Presentation:** Outputs a clear statistical layout tracking averages alongside explicit structural summaries.

---

## 💻 Compilation and Execution

To run this program locally, use any standard C compiler (such as GCC):

```bash
# Compile the code
gcc -o temp_monitor main.c

# Execute the application
./temp_monitor
```

---

## 📋 Project Identity
* **Team Name:** kata Arkan namanya AMBACODING 100% Halal jadi kita iyain ajah.
* **Members:** 
  1. Azaria Arkana Mulya 😹
  2. Muhammad Wildan Muzakki
  3. Ahmad Nejat Rahmansyah
* **Class:** 10-A/B
* **Release Date:** June 1, 2026 20:37 (GMT+7)
* **Version:** 1.1
* **Release Notes:** Added maximum/minimum tracking, overheat log, normal log, and below-normal log features.
* **Subject:** Informatics (End of Year Summative Project)
