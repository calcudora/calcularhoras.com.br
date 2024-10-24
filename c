<div class="time-calculator-container">
  <h2>Time Calculator</h2>
  <form id="time-calculator">
    <label for="hours">Hours:</label>
    <input type="number" id="hours" name="hours" min="0" value="0"><br><br>

    <label for="minutes">Minutes:</label>
    <input type="number" id="minutes" name="minutes" min="0" value="0"><br><br>

    <label for="seconds">Seconds:</label>
    <input type="number" id="seconds" name="seconds" min="0" value="0"><br><br>

    <button type="button" onclick="calculateTime()">Calculate Total Time</button>
  </form>

  <p id="result" style="font-weight: bold; margin-top: 20px;">Total Time: 00:00:00</p>
</div>

<script>
  function calculateTime() {
    let hours = parseInt(document.getElementById('hours').value) || 0;
    let minutes = parseInt(document.getElementById('minutes').value) || 0;
    let seconds = parseInt(document.getElementById('seconds').value) || 0;

    // Convert to total seconds
    let totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    // Calculate back to hours, minutes, and seconds
    let finalHours = Math.floor(totalSeconds / 3600);
    totalSeconds %= 3600;
    let finalMinutes = Math.floor(totalSeconds / 60);
    let finalSeconds = totalSeconds % 60;

    // Display the result
    document.getElementById('result').textContent = 
      `Total Time: ${String(finalHours).padStart(2, '0')}:${String(finalMinutes).padStart(2, '0')}:${String(finalSeconds).padStart(2, '0')}`;
  }
</script>

<style>
  .time-calculator-container {
    width: 300px;
    margin: 0 auto;
    padding: 20px;
    background-color: #f0f0f0;
    border-radius: 8px;
    text-align: center;
  }

  label {
    font-weight: bold;
  }

  input {
    width: 60px;
    margin-bottom: 10px;
  }

  button {
    padding: 8px 12px;
    background-color: #4CAF50;
    color: white;
    border: none;
    border-radius: 4px;
    cursor: pointer;
  }

  button:hover {
    background-color: #45a049;
  }
</style>
