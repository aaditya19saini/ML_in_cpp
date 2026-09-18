# Machine Learning in C++

An educational C++ project for rebuilding core machine-learning ideas from their mathematical definitions. The current focus is **simple linear regression**.

## Project status

Work in progress. The project currently has the initial mean, variance, and covariance function scaffolding in place; the complete training, prediction, and evaluation flow has not yet been implemented. The current source is therefore not expected to compile successfully until the remaining functions and `main()` are completed.

## Current module: Simple Linear Regression

The goal is to fit a straight line to paired training values:

```text
y_hat = b0 + b1 * x
```

where:

- `b1` is the slope of the fitted line.
- `b0` is the intercept.
- `y_hat` is the predicted value for an input `x`.

The implementation is being built from these calculations:

```text
mean(x)       = sum(xi) / n
variance(x)   = sum((xi - mean(x))^2)
covariance(x, y) = sum((xi - mean(x)) * (yi - mean(y)))

b1 = covariance(x, y) / variance(x)
b0 = mean(y) - b1 * mean(x)
```

The model will then generate predictions for the training set and measure error with root mean squared error (RMSE):

```text
RMSE = sqrt(sum((actual - predicted)^2) / n)
```

## Repository layout

```text
.
├── simple LR/
│   ├── main.cpp
│   └── simple_linear_regression_recreation_checklist.md
└── README.md
```

- `simple LR/main.cpp` contains the developing implementation.
- `simple LR/simple_linear_regression_recreation_checklist.md` is the step-by-step learning and recreation guide.

## Planned workflow

```text
Training data
    -> extract x and y values
    -> calculate means, variance, and covariance
    -> calculate b0 and b1
    -> predict y values
    -> evaluate predictions with RMSE
```

## Building and running

Once `main.cpp` is complete, compile it with a C++ compiler such as g++:

```powershell
g++ -std=c++17 "simple LR/main.cpp" -o simple-linear-regression.exe
.\simple-linear-regression.exe
```

## Learning goals

By completing this module, the aim is to be able to:

- implement simple linear regression without a machine-learning library;
- explain the role of mean, variance, covariance, coefficients, predictions, and RMSE;
- use C++ vectors, loops, functions, and references confidently; and
- recreate the program from the equations on a blank file.

## Next steps

1. Finish and test `getMean()`.
2. Complete `getVariance()` and `getCovariance()`.
3. Extract feature and target values from the dataset.
4. Calculate the regression coefficients.
5. Add prediction and RMSE evaluation functions.
6. Connect everything in `main()` and test with different datasets.

See the [recreation checklist](<simple%20LR/simple_linear_regression_recreation_checklist.md>) for the detailed implementation plan.
