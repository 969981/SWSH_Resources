/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bce9a0; name: FUN_00bce9a0
 */


void FUN_00bce9a0(long param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_48;
  
  lVar2 = FUN_00bccb30();
  if (lVar2 != 0) {
    uVar1 = FUN_008787f0();
    if ((uVar1 & 0xffff) != 0) {
      lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
      if (lVar2 == 0) {
        FUN_01520760(0,uVar1,1,1);
      }
      else {
        plVar5 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_01520760(lVar2,uVar1,1,1);
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if (param_2 != 0) {
      if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00bceb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x60) + 0x38))(*(long **)(param_1 + 0x60),param_4);
        return;
      }
      FUN_0150ab10(*(undefined8 *)(param_1 + 0x70),param_3 + -1,param_4);
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    local_48 = *(long *)(param_1 + 0x78);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_01507190(uVar4,param_3,param_4,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    uVar3 = FUN_0150a670(*(undefined8 *)(param_1 + 0x70),param_3,param_4);
    if ((uVar3 & 1) != 0) {
      FUN_0150a9e0(*(undefined8 *)(param_1 + 0x70),param_3,param_4);
      FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),0);
      FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),1);
      FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),2);
      FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),3);
      FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),4);
      FUN_0150ab30(*(undefined8 *)(param_1 + 0x70),5);
    }
  }
  return;
}


