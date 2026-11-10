/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cc0a0; name: FUN_004cc0a0
 */


void FUN_004cc0a0(long *param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (param_3 == 0) {
    *(undefined2 *)((long)param_6 + 0x12) = 0;
    uVar2 = 0x2e;
    goto LAB_004cc178;
  }
  *param_6 = param_2;
  *(ushort *)(param_6 + 2) = param_3;
  *(ushort *)((long)param_6 + 0x12) = param_3;
  *(undefined4 *)(param_6 + 1) = param_5;
  if (param_1[3] != 0) {
    FUN_004692f0(param_1 + 8,param_1[3],param_6,(int)param_1[5]);
  }
  *(undefined4 *)((long)param_6 + 0x2c) = param_4;
  *(int *)(param_6 + 4) = (int)param_1[5];
  *(undefined4 *)(param_6 + 5) = *(undefined4 *)((long)param_1 + 0x24);
  uVar1 = (int)param_1[5] + (uint)param_3;
  *(uint *)(param_1 + 5) = uVar1;
  if (*(short *)((long)param_1 + 0x54) == 1) {
    if (uVar1 < *(uint *)((long)param_1 + 0x24)) {
LAB_004cc174:
      uVar2 = 0x2d;
      goto LAB_004cc178;
    }
    pcVar4 = *(code **)(*param_1 + 0xe8);
    uVar3 = 1;
  }
  else {
    if (uVar1 <= *(uint *)(param_1 + 7)) goto LAB_004cc174;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x34);
    pcVar4 = *(code **)(*param_1 + 0xe8);
    uVar3 = 0;
  }
  uVar2 = (*pcVar4)(param_1,uVar3);
LAB_004cc178:
  *(undefined4 *)(param_6 + 6) = uVar2;
  return;
}


