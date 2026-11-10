/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409300; name: FUN_00409300
 */


void FUN_00409300(long *param_1,int *param_2,undefined4 param_3)

{
  long lVar1;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  if ((*(byte *)((long)param_1 + 0x5a) >> 4 & 1) == 0) {
    lVar1 = param_1[7];
    local_30 = *param_2;
    if (lVar1 == 0) {
      if (((*(byte *)((long)param_1 + 0x5a) & 3) != 0) && (0 < local_30)) {
        iStack_2c = param_2[1];
        local_48 = param_1 + 5;
        local_40 = 0x2000000;
        local_38 = 0x3f800000;
        local_28 = 0x100;
        local_26 = 0;
        lVar1 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_48,1,0);
        param_1[7] = lVar1;
        if (lVar1 == 0) {
          (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
          return;
        }
        return;
      }
    }
    else {
      if (local_30 != 0) {
        FUN_004be340(0,*(undefined8 *)PTR_DAT_02712b18,lVar1,0x2000000,local_30,param_2[1],0);
        return;
      }
      FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,lVar1,param_1 + 5);
      param_1[7] = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004093fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}


