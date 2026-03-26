function partition(arr, low, high){
    let pivot = arr[low]
    let i = low + 1
    let j = high

    while(i<j){
        if(arr[i] > pivot && arr[j] < pivot){
            let temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
            i++
            j--
        } else if(arr[i] <= pivot){
            i++
        } else{
            j--
        }
    }
    let temp = arr[0]
    arr[0] = arr[j]
    arr[j] = temp
    return j
}

console.log(partition([1,4,3,2,7,8,9], 0, 7))

function quickSort(arr, low, high){
    if(low < high){
        let pivotIndex = partition(arr, low, high)

        quickSort(arr, low, pivotIndex - 1)
        quickSort(arr, pivotIndex + 1, high)
    }
}

let arr = [1,4,3,2,7,8,9]
quickSort(arr, 0, arr.length - 1)
console.log(arr)