Documentation for your Drupal 7-based conference management system application:

1. Project Overview
    This project is a conference management system developed in Drupal 7. It allows users to register for sessions and tracks, provides administrative tools for managing schedules and attendees, and exposes a RESTful API to access session and attendee information.

    Features:
        Content types for Tracks, Sessions, and Attendees.
        User registration for sessions with validation to prevent overlapping registrations.
        RESTful API for external access to session and attendee data.
        Administrative tools with Views for session schedules and attendee lists.
        Custom validation and error handling for invalid input and edge cases.

2. Installation Steps
    2.1 Prerequisites
    Ensure the following are installed and configured:

    Drupal 7 core installation.
    MySQL database.
    PHP 7.4 or above.

    2.2 Module Dependencies
    Install and enable the following contributed modules:

    Views
    Entity API
    Rules
    Services
    Date
    These modules are necessary for building the user registration system, creating REST API endpoints, and generating reports for admins.

    2.3 Setting Up Content Types
    Tracks
    Sessions
    Attendees

3. REST API Configuration
    3.1 Enabling the REST API
    Install the Services module.
    Navigate to admin/structure/services and create a new endpoint called conference_api.
    Choose REST as the service type.
    Enable resources:
    sessions: Exposes all sessions.
    attendees: Expose all attendees with session topic.

    3.2 Authentication
    OAuth2 is used for securing access to the API.
    Configure user roles to control who can access the API via admin/people/permissions.

    3.4 Sample API Response
    /conference-api/sessions.json:
    [
    {
        "title": "Iaceo Quae Quia Quis Rusticus Suscipere Utrum",
        "start_time": "2024-01-03T11:30:00",
        "end_time": "2026-07-13T04:45:45",
        "presenter": "Ad appellatio decet saepius tamen validus velit vindico."
    },
    {
        "title": "Abico Hendrerit Iustum Occuro Odio Quidem",
        "start_time": "2027-06-18T01:15:30",
        "end_time": "2021-01-22T07:00:30",
        "presenter": "Gemino jugis patria rusticus. Caecus causa consectetuer decet hos persto plaga quis tincidunt ut. Fere huic macto magna natu praesent sino vindico."
    }
    ]

    /conference-api/attendees.json:
    [
    {
        "username": "test1",
        "email": "test1@info.com",
        "sessions": "Green Energy and Religious Stewardship",
        "sessions_start_time": "02-10-2024 18:00",
        "sessions_end_time": "02-10-2024 20:00"
    },
    {
        "username": "admin",
        "email": "info@cms.com",
        "sessions": "Green Energy and Religious Stewardship",
        "sessions_start_time": "02-10-2024 18:00",
        "sessions_end_time": "02-10-2024 20:00"
    }
    ]

4. Business Logic and Validation

    4.1 Prevent Overlapping Session Registration
    Used custom module session_validation to evaluate overlapping time logic.

5. Administrator Tools

    Created a View for Attendees for sessions table to view the information:

6. Testing the Solution
    6.1 Functional Testing
    Session Registration: Ensured that users can register for sessions and the system prevents overlaps.
    API: Tested API responses using cURLs to validate session and attendee data retrieval. Please review output folder for screengrab.
    Views: Ensured reports for administrators display correct data for sessions and attendees.
    6.2 Security Testing
    Validated API authentication.
    Ensured that only authorized users can access REST API endpoints.

GitHub Repository
Conference Management System (Drupal 7) (https://github.com/jayvala/assesment_demo/).
