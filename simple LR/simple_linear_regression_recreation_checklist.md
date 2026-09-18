# Simple Linear Regression in C++ - Recreation Checklist

## 1. C++ Setup

- [x] Create a new `.cpp` file
- [x] Include `<iostream>`
- [x] Include `<vector>`
- [x] Include `<cmath>`
- [x] Add `using namespace std;`
- [x] Create an empty `main()` function

## 2. Understand the Data Structure

The dataset contains pairs of `(x, y)` values.

Example:

```cpp
vector<vector<double>> trainSet = {
    {1, 1},
    {2, 3},
    {4, 3},
    {3, 2},
    {5, 5}
};
```

- [ ] Understand that each inner vector represents one `(x, y)` observation
- [ ] Understand that `dataset[i][0]` is `x`
- [ ] Understand that `dataset[i][1]` is `y`
- [ ] Create a `vector<vector<double>>` for the dataset

## 3. Implement `getMean()`

Formula:

$$
\bar{x} = \frac{\sum x_i}{n}
$$

- [x] Create `getMean(vector<double> values)`
- [x] Create `double sum = 0`
- [x] Loop through every value
- [ ] Add each value to `sum`
- [ ] Return `sum / values.size()`
- [ ] Understand what `auto value` means in the range-based loop
- [ ] Understand what `sum += value` does
- [ ] Test the function independently

## 4. Implement `getVariance()`

Formula used by the project:

$$
\mathrm{Var}(x) = \sum (x_i-\bar{x})^2
$$

- [x] Create `getVariance()`
- [x] Calculate the mean
- [x] Create `double variance = 0`
- [x] Loop through the values
- [x] Calculate `value - mean`
- [x] Square the difference using `pow(..., 2)`
- [x] Add it to `variance`
- [x] Return `variance`
- [x] Manually calculate one example to verify the function

> Note: this implementation uses the sum of squared deviations, without dividing by `n` or `n-1`.

## 5. Implement `getCovariance()`

Formula:

$$
\mathrm{Cov}(x,y) = \sum (x_i-\bar{x})(y_i-\bar{y})
$$

- [ ] Create `getCovariance(valuesA, valuesB)`
- [ ] Calculate mean of A
- [ ] Calculate mean of B
- [ ] Create `double covariance = 0`
- [ ] Loop over the indices
- [ ] Calculate `valuesA[i] - meanA`
- [ ] Calculate `valuesB[i] - meanB`
- [ ] Multiply the two deviations
- [ ] Add the result to `covariance`
- [ ] Return `covariance`
- [ ] Make sure both vectors have the same size

## 6. Extract X and Y From the Dataset

- [ ] Create `vector<double> xs`
- [ ] Create `vector<double> ys`
- [ ] Loop through every `pair` in `dataset`
- [ ] Push `pair[0]` into `xs`
- [ ] Push `pair[1]` into `ys`
- [ ] Understand what `pair` represents
- [ ] Understand what `push_back()` does

## 7. Calculate Regression Coefficients

Regression equation:

$$
\hat{y} = b_0 + b_1x
$$

Slope:

$$
b_1 = \frac{\mathrm{Cov}(x,y)}{\mathrm{Var}(x)}
$$

Intercept:

$$
b_0 = \bar{y} - b_1\bar{x}
$$

- [ ] Create `getCoefficients()`
- [ ] Extract `xs`
- [ ] Extract `ys`
- [ ] Calculate `b1`
- [ ] Calculate `b0`
- [ ] Return both coefficients
- [ ] Understand why `{b0, b1}` can be returned as a `vector<double>`
- [ ] Verify the coefficients manually

## 8. Implement Prediction

Formula:

$$
\hat{y} = b_0 + b_1x
$$

- [ ] Create `predict()`
- [ ] Accept an `x`
- [ ] Accept the coefficient vector
- [ ] Access `coefficients[0]`
- [ ] Access `coefficients[1]`
- [ ] Calculate predicted `y`
- [ ] Return predicted `y`

## 9. Generate Predictions

Flow:

```text
Training data
      |
      v
Calculate coefficients
      |
      v
    b0, b1
      |
      v
Run every x through predict()
      |
      v
Predictions
```

- [ ] Create an empty `vector<double> predictions`
- [ ] Loop through `trainSet`
- [ ] Extract the x value
- [ ] Call `predict()`
- [ ] `push_back()` the prediction
- [ ] Verify that the number of predictions equals the number of observations

## 10. Implement RMSE Evaluation

Formula:

$$
RMSE =
\sqrt{
\frac{1}{n}
\sum_{i=1}^{n}(y_i-\hat{y}_i)^2
}
$$

- [ ] Create `evaluation()`
- [ ] Pass the dataset
- [ ] Pass the predictions
- [ ] Create `double sum = 0`
- [ ] Loop over observations
- [ ] Get actual `y`
- [ ] Get predicted `y`
- [ ] Calculate the error
- [ ] Square the error
- [ ] Add it to `sum`
- [ ] Divide by the number of observations
- [ ] Take the square root
- [ ] Return RMSE

## 11. Put Everything Together

```text
                    DATASET
                       |
                       v
                 Extract X, Y
                  /         \
                 v           v
                xs          ys
                 \           /
                  \         /
                   v       v
                Calculate means
                       |
              +--------+--------+
              |                 |
              v                 v
          Variance(X)       Covariance(X,Y)
              |                 |
              +--------+--------+
                       |
                       v
                      b1
                       |
                       v
                      b0
                       |
                       v
                Regression model
                  y = b0 + b1x
                       |
                       v
                  Predictions
                       |
                       v
                     RMSE
```

- [ ] Implement every function
- [ ] Connect the functions in the correct order
- [ ] Compile the complete program
- [ ] Run it successfully

## 12. Main Function Checklist

- [ ] Create `trainSet`
- [ ] Add the five `(x, y)` observations
- [ ] Call `getCoefficients(trainSet)`
- [ ] Store the returned coefficients
- [ ] Print `b0`
- [ ] Print `b1`
- [ ] Create `predictions`
- [ ] Generate a prediction for every training observation
- [ ] Call `evaluation()`
- [ ] Print RMSE

## 13. C++ Concepts You Should Be Able to Explain

- [ ] What is `vector<double>`?
- [ ] What is `vector<vector<double>>`?
- [ ] What does `auto` mean?
- [ ] What does a range-based `for` loop do?
- [ ] What does `push_back()` do?
- [ ] What does `const vector<vector<double>>&` mean?
- [ ] What does `pow(x, 2)` do?
- [ ] What does `sqrt()` do?
- [ ] Why can a function return `vector<double>`?
- [ ] Why is `return 0` not necessarily required in `main()`?

## 14. Statistics Concepts You Should Be Able to Explain

- [ ] What is the mean?
- [ ] What is variance?
- [ ] What is covariance?
- [ ] Why does covariance tell us about the relationship between X and Y?
- [ ] Why is `b1 = covariance / variance`?
- [ ] What does `b0` represent?
- [ ] What does the regression equation mean?
- [ ] What is a prediction?
- [ ] What is residual/error?
- [ ] What is RMSE?

## 15. Blank-File Recreation Test

Do not consider the project finished just because it compiles.

From a completely blank `.cpp` file:

- [ ] Recreate `getMean()` without looking at the original
- [ ] Recreate `getVariance()` without looking
- [ ] Recreate `getCovariance()` without looking
- [ ] Recreate `getCoefficients()` without looking
- [ ] Recreate `predict()` without looking
- [ ] Recreate `evaluation()` without looking
- [ ] Recreate `main()` without looking
- [ ] Compile the program
- [ ] Run the program
- [ ] Compare your output with the original
- [ ] Change the dataset
- [ ] Verify that the coefficients change
- [ ] Add a new observation
- [ ] Verify that RMSE changes

## Final Goal

- [ ] I can recreate simple linear regression from the mathematical equations
- [ ] I understand why every major C++ line exists
- [ ] I can explain the data flow from dataset -> coefficients -> predictions -> RMSE
- [ ] I can modify the implementation without relying on the original code
