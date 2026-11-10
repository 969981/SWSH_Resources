/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb4f10; name: FUN_00cb4f10
 */


void FUN_00cb4f10(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar6 = (long *)param_2[3];
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = plVar6;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar8 = param_2[1] - *param_2;
  if (lVar8 != 0) {
    if (0x2aaaaaaaaaaaaaa < (ulong)((lVar8 >> 5) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,lVar8,8);
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = puVar7 + (lVar8 >> 5) * 4;
    *param_1 = puVar7;
    param_1[1] = puVar7;
    puVar5 = PTR_DAT_02710860;
    puVar2 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar2; puVar1 = puVar1 + 0xc) {
      uVar9 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar9;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar9 = puVar1[1];
      *puVar7 = *puVar1;
      puVar7[1] = uVar9;
      uVar9 = puVar1[2];
      uVar3 = puVar1[3];
      uVar4 = puVar1[5];
      puVar7[4] = puVar1[4];
      puVar7[5] = uVar4;
      puVar7[2] = uVar9;
      puVar7[3] = uVar3;
      *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar1 + 6);
      *(undefined2 *)((long)puVar7 + 0x34) = *(undefined2 *)((long)puVar1 + 0x34);
      *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar1 + 7);
      *(undefined1 *)((long)puVar7 + 0x3c) = *(undefined1 *)((long)puVar1 + 0x3c);
      *(undefined1 *)((long)puVar7 + 0x3d) = *(undefined1 *)((long)puVar1 + 0x3d);
      *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar1 + 8);
      *(undefined4 *)((long)puVar7 + 0x44) = *(undefined4 *)((long)puVar1 + 0x44);
      *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(puVar1 + 9);
      uVar9 = puVar1[10];
      *(undefined1 *)(puVar7 + 0xb) = *(undefined1 *)(puVar1 + 0xb);
      puVar7[10] = uVar9;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      puVar7 = (undefined8 *)(param_1[1] + 0x60);
      param_1[1] = puVar7;
    }
  }
  return;
}


