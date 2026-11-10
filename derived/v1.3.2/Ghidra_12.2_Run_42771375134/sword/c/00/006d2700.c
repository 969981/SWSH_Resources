/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d2700; name: FUN_006d2700
 */


void FUN_006d2700(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar2 = PTR_DAT_02710860;
  puVar9 = *(undefined8 **)(param_1 + 8);
  param_4 = (long)puVar9 - param_4;
  puVar1 = (undefined8 *)(param_2 + param_4);
  if (puVar1 < param_3) {
    puVar10 = puVar1;
    puVar11 = puVar9;
    do {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((code *)puVar10[3] != (code *)0x0) {
        (*(code *)puVar10[3])(puVar10 + 4,puVar11 + 4);
        uVar8 = *puVar10;
        uVar5 = puVar10[1];
        uVar6 = puVar10[3];
        puVar11[2] = puVar10[2];
        puVar11[3] = uVar6;
        *puVar11 = uVar8;
        puVar11[1] = uVar5;
        pcVar4 = (code *)puVar10[1];
        if (pcVar4 != (code *)0x0) {
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          (*pcVar4)(puVar10 + 4);
        }
      }
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar10 = puVar10 + 0x10;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 8) + 0x80);
      *(undefined8 **)(param_1 + 8) = puVar11;
    } while (puVar10 < param_3);
  }
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      pcVar4 = *(code **)((long)puVar9 + lVar3 + -0x78);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)((long)puVar9 + lVar3 + -0x70) = 0;
        *(undefined8 *)((long)puVar9 + lVar3 + -0x68) = 0;
        *(undefined8 *)((long)puVar9 + lVar3 + -0x80) = 0;
        *(undefined8 *)((long)puVar9 + lVar3 + -0x78) = 0;
        (*pcVar4)((long)puVar9 + lVar3 + -0x60);
      }
      pcVar4 = *(code **)((long)puVar1 + lVar3 + -0x68);
      if (pcVar4 != (code *)0x0) {
        lVar7 = (long)puVar1 + lVar3 + -0x60;
        (*pcVar4)(lVar7,(long)puVar9 + lVar3 + -0x60);
        puVar10 = (undefined8 *)((long)puVar1 + lVar3 + -0x80);
        uVar5 = *puVar10;
        uVar6 = *(undefined8 *)((long)puVar1 + lVar3 + -0x68);
        uVar8 = *(undefined8 *)((long)puVar1 + lVar3 + -0x78);
        *(undefined8 *)((long)puVar9 + lVar3 + -0x70) =
             *(undefined8 *)((long)puVar1 + lVar3 + -0x70);
        *(undefined8 *)((long)puVar9 + lVar3 + -0x68) = uVar6;
        *(undefined8 *)((long)puVar9 + lVar3 + -0x80) = uVar5;
        *(undefined8 *)((long)puVar9 + lVar3 + -0x78) = uVar8;
        pcVar4 = *(code **)((long)puVar1 + lVar3 + -0x78);
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)((long)puVar1 + lVar3 + -0x70) = 0;
          *(undefined8 *)((long)puVar1 + lVar3 + -0x68) = 0;
          *puVar10 = 0;
          *(undefined8 *)((long)puVar1 + lVar3 + -0x78) = 0;
          (*pcVar4)(lVar7);
        }
      }
      lVar3 = lVar3 + -0x80;
    } while (-lVar3 != (param_4 >> 7) * 0x80);
  }
  return;
}


