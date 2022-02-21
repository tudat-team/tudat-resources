import subprocess

regex = r"(?P<name>[\w,-]+)[\s]+(?P<major>0|[1-9]\d*)\.(?P<minor>0|[1-9]\d*)\.(?P<patch>0|[1-9]\d*)(?:-(?P<prerelease>(?:0|[1-9]\d*|\d*[a-zA-Z-][0-9a-zA-Z-]*)(?:\.(?:0|[1-9]\d*|\d*[a-zA-Z-][0-9a-zA-Z-]*))*))?(?:\+(?P<buildmetadata>[0-9a-zA-Z-]+(?:\.[0-9a-zA-Z-]+)*))?[\s]+(?P<build>[\w]+)[\s]+(?P<channel>[\w,-]+)"


def search_conda_packages(channel, package):
    cmd = ['conda', 'search']
    if channel:
        cmd.extend(['-c', channel])
    cmd.append(package)
    process = subprocess.Popen(cmd, stdout=subprocess.PIPE)
    output, error = process.communicate()
    s = output.decode('ascii')
    print(s)
    res = []
    # for s in s.split('\n'):
    #asd
    #     if s.startswith('conda-buildd'd):ssdddddd
    #         return s.split()[a0]aaa


#     cmd1 = ['git', 'tag', '']d
# process = subprocess.Popen(, stddout=subprocessd.PIPE)d
# output, error = process.communicate()


if __name__ == "__main__":
    search_conda_packages('tudat-team/dev', 'tudat-resources')
