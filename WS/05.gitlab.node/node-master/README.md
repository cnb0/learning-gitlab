# Simply Simple Notes

This is a simple application that stores notes in a SQLite file. This project is
meant to be used as a demo to display some of the Gitlab's [Secure](https://about.gitlab.com/stages-devops-lifecycle/secure/) and [Defend](https://about.gitlab.com/stages-devops-lifecycle/defend/) features.

To get started on giving a demo see the [Running a Demo](./docs/running_demo.md) section.
In order to setup this project in your own space, checkout the [Usage Guide](./docs/usage_guide.md)

## Requirements

- Python
- Pip

## Installation

1. Always use a virtual environment to keep the environment isolated and consistent:
    ```bash
    virtualenv venv
    source venv/bin/activate
    ```
2. Install the Dependencies:
    ```bash
    pip install -r requirements.txt
    ```

## Running

If running locally, you can start up the application by running the following:

```bash
$ python run.py
* Running on http://0.0.0.0:5000/ (Press CTRL+C to quit)
```

## Usage

The application consists of a simple UI that allows notes to be read, deleted, and added to
a database. The database is shared between all appliaction users. 

The application will display all the notes at the home screen. It will also allow adding a note, which adds it to the end of the list, a note can also be deleted by id.

**Note:** You can also use the API describe in [API Guidelines](./docs/api_guidelines.md)

# test