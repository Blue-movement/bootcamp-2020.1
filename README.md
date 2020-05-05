# Blue Movement Boot Camp

## Getting Started

### Git Info

1. [Download and install the latest version of Git.](https://git-scm.com/downloads)
2. [Set your username in Git.](https://help.github.com/en/articles/setting-your-username-in-git)

    `git config --global user.name "Mona Lisa"`

    confirm it worked:

    `git config --global user.name`

    Should respond with: `Mona Lisa`

3. [Set your commit email address in Git.](https://help.github.com/en/articles/setting-your-commit-email-address)

    `git config --global user.email "email@example.com"`

    confirm it worked:

    `git config --global user.email`

    Should respond with: `email@example.com`
4. [Fork this repo.](https://help.github.com/en/github/getting-started-with-github/fork-a-repo)
5. [Create a clean Pull Request](https://help.github.com/en/desktop/contributing-to-projects/creating-a-pull-request)
    - Create a personal fork of the project on Github.
    - Clone the fork on your local machine. Your remote repo on Github is called origin.
    - Add the original repository as a remote called upstream using one of the following:
  
        `git remote add upstream https://github.ibm.com/payer/caps.git`

        or

        `git remote add upstream git@github.ibm.com:payer/caps.git`

        > If you created your fork a while ago be sure to pull upstream changes into your local repository.
        Create a new branch to work on! Branch from master.
    - Push your branch to your fork on Github, the remote origin.
      - stage changes for push:
  
        `git add .`

        or

        `git add [FILE PATH]`

      - make commit message:

        `git commit -m "your message"`

      - push your changes:

        `git push origin [your branch name]`

### Tools

- [Visual Studio Code](https://code.visualstudio.com/download)
- [Atom](https://atom.io/)
- [Git Cheat Sheet](https://github.github.com/training-kit/downloads/github-git-cheat-sheet/)
