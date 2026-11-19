function SumFactors(iNo)
{
        let iCnt = 0
        let iSum = 0
        console.log("Factors of : " , iNo)
        for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
        {
                if(iNo % iCnt == 0)
                {
                        iSum += iCnt
                }        
        }
        
        return iSum

}

function main()
{
        let iRet = 0
        let iValue = 12
        iRet = SumFactors(iValue)
        console.log("Summation of Factors : " , iRet)
}

main()
