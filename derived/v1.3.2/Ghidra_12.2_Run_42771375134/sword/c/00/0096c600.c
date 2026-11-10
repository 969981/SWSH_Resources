/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096c600; name: FUN_0096c600
 */


void FUN_0096c600(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (param_3 < 0x18) {
    uVar2 = FUN_008daa40();
    lVar3 = FUN_008dd0a0(uVar2,2,param_2);
    if (lVar3 != 0) {
      do {
        uVar1 = FUN_008dba00(lVar3);
        if ((uVar1 & 0xffff) == param_3) {
          return;
        }
        lVar3 = FUN_008dd130(uVar2,lVar3,0);
      } while (lVar3 != 0);
    }
    lVar3 = (*(code *)(&PTR_LAB_0261fec0)[*(long *)(&DAT_0214bc10 + (long)(int)param_3 * 8) * 2])
                      (&local_44);
    if (lVar3 != 0) {
      uVar2 = FUN_008daa50(param_1,2,param_3,3,0,param_2,lVar3,local_44);
      local_4c = 0;
      local_48 = 0;
      FUN_008ed4b0(param_4,&local_48,&local_4c);
      FUN_008db870(uVar2,6,local_48);
      FUN_008db870(uVar2,5,local_4c);
    }
  }
  return;
}


