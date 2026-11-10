/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048c100; name: FUN_0048c100
 */


void FUN_0048c100(undefined8 *param_1,int *param_2,ulong param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined5 uVar4;
  ulong uVar5;
  
  puVar1 = (uint *)((long)param_1 + 0x26b);
  uVar4 = *(undefined5 *)puVar1;
  if ((*puVar1 >> 0xe & 1) == 0) {
    if (param_1[0x3d] != 0) {
      uVar5 = FUN_004bd840();
      if ((uVar5 & 1) != 0) goto LAB_0048c140;
      uVar4 = *(undefined5 *)puVar1;
    }
    uVar3 = (uint)uVar4;
    uVar2 = (undefined1)((uint5)uVar4 >> 0x20);
    *(undefined1 *)((long)param_1 + 0x26f) = uVar2;
    *puVar1 = uVar3 | 0x2000;
    if (*param_2 != 0) {
      FUN_0048c4c0(param_1,1,0x2000000,*(undefined8 *)param_2,param_2[2]);
      return;
    }
    if ((*(byte *)((long)param_1 + 0x26a) & 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0048c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,0,1);
      return;
    }
    if (param_1[0x3c] != 0) {
      FUN_004be340(0,*(undefined8 *)PTR_DAT_02712b18,param_1[0x3c],0x2000000,0,4,0);
      return;
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x43) = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    if ((uVar3 >> 0x10 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x26f) = uVar2;
      *puVar1 = uVar3 & 0xfff1ffff | 0x12000;
    }
  }
LAB_0048c140:
                    /* WARNING: Could not recover jumptable at 0x0048c160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0,0);
  return;
}


