/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00818460; name: FUN_00818460
 */


void FUN_00818460(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  ulong local_58 [2];
  void *local_48;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  plVar3 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  uVar4 = (**(code **)(*plVar3 + 0x2d8))(plVar3,param_2,param_3);
  *(undefined8 *)(param_1 + 8) = uVar4;
  local_58[1] = 0;
  local_48 = (void *)0x0;
  local_58[0] = 0x79656b06;
  lVar5 = FUN_007e3d00(*(undefined8 *)(param_3 + 0x68),local_58);
  puVar2 = PTR_DAT_02716e20;
  iVar1 = *(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(lVar5 + 0x3c) * 4);
  if (*(int *)(param_1 + 0x18) != iVar1) {
    if ((*(int *)(param_1 + 0x18) == 9) &&
       (pbVar7 = *(byte **)(param_1 + 0x10), pbVar7 != (byte *)0x0)) {
      if ((*pbVar7 & 1) != 0) {
        operator_delete(*(void **)(pbVar7 + 0x10));
      }
      operator_delete(pbVar7);
    }
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 9) {
      puVar6 = operator_new(0x18);
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar6;
    }
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  local_58[1] = 0;
  local_48 = (void *)0x0;
  local_58[0] = 0x65756c61760a;
  lVar5 = FUN_007e3d00(*(undefined8 *)(param_3 + 0x68),local_58);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar5 + 0x3c) * 4);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),param_1);
  return;
}


