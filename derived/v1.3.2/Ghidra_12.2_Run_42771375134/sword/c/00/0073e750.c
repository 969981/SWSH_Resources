/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073e750; name: FUN_0073e750
 */


void FUN_0073e750(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_1 + 0x788);
  uVar8 = (ulong)*param_2;
  if ((ulong)((*(long *)(param_1 + 0x790) - lVar9 >> 3) * -0x5555555555555555) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar7 = (undefined4 *)(lVar9 + uVar8 * 0x18);
  *(undefined4 *)(param_1 + 0x610) = *puVar7;
  lVar10 = *(long *)(puVar7 + 2);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x618);
  *(long *)(param_1 + 0x618) = lVar10;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar9 = *(long *)(lVar9 + uVar8 * 0x18 + 0x10);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(param_1 + 0x620);
  *(long *)(param_1 + 0x620) = lVar9;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  puVar5 = PTR_DAT_027159c0;
  uVar1 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
  *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
  uVar2 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(puVar5 + 8);
  uVar3 = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)(param_1 + 0x6b8) = *(undefined8 *)(puVar5 + 0x38);
  uVar4 = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x6a8) = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x690) = uVar1;
  *(undefined8 *)(param_1 + 0x680) = uVar2;
  *(undefined8 *)(param_1 + 0x6b0) = uVar3;
  *(undefined8 *)(param_1 + 0x6a0) = uVar4;
  FUN_0073e860(param_1);
  return;
}


