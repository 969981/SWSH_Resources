/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093dff0; name: FUN_0093dff0
 */


void FUN_0093dff0(undefined8 param_1,uint param_2,undefined4 param_3,undefined1 param_4,long param_5
                 ,byte param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_54;
  
  if (param_2 < 5) {
    uVar2 = FUN_008daa40();
    lVar3 = FUN_008dd0a0(uVar2,1,param_3);
    if (lVar3 != 0) {
      do {
        uVar1 = FUN_008dba00(lVar3);
        if ((uVar1 & 0xffff) == param_2) {
          return;
        }
        lVar3 = FUN_008dd130(uVar2,lVar3,0);
      } while (lVar3 != 0);
    }
    lVar3 = (*(code *)(&PTR_LAB_0261bf68)[(ulong)param_2 * 2])(&local_54);
    if ((lVar3 != 0) &&
       (lVar3 = FUN_008daa50(param_1,1,(ulong)param_2,2,0,param_3,lVar3,local_54), lVar3 != 0)) {
      if (param_6 != 0) {
        uVar4 = 0;
        do {
          FUN_008db870(lVar3,uVar4 & 0xffffffff,*(undefined4 *)(param_5 + uVar4 * 4));
          uVar4 = uVar4 + 1;
        } while (param_6 != uVar4);
      }
      FUN_008db870(lVar3,6,param_4);
    }
  }
  return;
}


