echo "Launching dask worker"
# fix for ubuntu container
export LC_ALL=C.UTF-8
export LANG=C.UTF-8
/opt/conda/bin/dask-worker --scheduler-file ~/.dask_scheduler.json
