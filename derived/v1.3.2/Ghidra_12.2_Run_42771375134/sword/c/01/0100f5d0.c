/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100f5d0; name: FUN_0100f5d0
 */


void FUN_0100f5d0(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_DAT_02710860;
  puVar8 = *(undefined8 **)(param_1 + 8);
  param_4 = (long)puVar8 - param_4;
  puVar1 = (undefined8 *)(param_2 + param_4);
  if (puVar1 < param_3) {
    puVar6 = puVar1;
    puVar9 = puVar8;
    do {
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      uVar10 = *puVar6;
      *puVar6 = 0;
      *puVar9 = uVar10;
      uVar5 = puVar6[3];
      uVar10 = puVar6[2];
      puVar9[1] = puVar6[1];
      puVar9[2] = uVar10;
      puVar9[3] = uVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      puVar6 = puVar6 + 4;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + 0x20);
      *(undefined8 **)(param_1 + 8) = puVar9;
    } while (puVar6 < param_3);
  }
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      uVar10 = *(undefined8 *)((long)puVar1 + lVar4 + -0x20);
      *(undefined8 *)((long)puVar1 + lVar4 + -0x20) = 0;
      puVar6 = *(undefined8 **)((long)puVar8 + lVar4 + -0x20);
      *(undefined8 *)((long)puVar8 + lVar4 + -0x20) = uVar10;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        plVar2 = *(long **)((long)puVar8 + lVar4 + -0x18);
        (**(code **)(*plVar2 + 0x18))
                  (plVar2,puVar6,*(undefined8 *)((long)puVar8 + lVar4 + -0x10),
                   *(undefined8 *)((long)puVar8 + lVar4 + -8));
      }
      uVar10 = *(undefined8 *)((long)puVar1 + lVar4 + -0x10);
      uVar5 = *(undefined8 *)((long)puVar1 + lVar4 + -8);
      lVar7 = lVar4 + -0x20;
      *(undefined8 *)((long)puVar8 + lVar4 + -0x18) = *(undefined8 *)((long)puVar1 + lVar4 + -0x18);
      *(undefined8 *)((long)puVar8 + lVar4 + -0x10) = uVar10;
      *(undefined8 *)((long)puVar8 + lVar4 + -8) = uVar5;
      lVar4 = lVar7;
    } while (-lVar7 != (param_4 >> 5) * 0x20);
  }
  return;
}


