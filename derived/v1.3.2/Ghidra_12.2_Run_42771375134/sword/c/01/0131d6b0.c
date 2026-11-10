/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131d6b0; name: FUN_0131d6b0
 */


void FUN_0131d6b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ulong uVar11;
  
  lVar8 = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != lVar8) {
    uVar11 = 0;
    do {
      plVar5 = (long *)FUN_006a1cd0(param_2);
      if ((*(long *)(lVar8 + uVar11 * 0x90) == *plVar5) &&
         (lVar8 = *(long *)(param_1 + 0x40) + uVar11 * 0x90,
         uVar6 = (**(code **)(lVar8 + 0x10))(lVar8 + 0x30,param_2), (uVar6 & 1) != 0)) {
        lVar8 = *(long *)(param_1 + 0x40);
        lVar2 = *(long *)(param_1 + 0x48);
        puVar9 = (undefined8 *)(lVar8 + uVar11 * 0x90);
        *puVar9 = *(undefined8 *)(lVar2 + -0x90);
        pcVar10 = (code *)puVar9[3];
        if (pcVar10 != (code *)0x0) {
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          (*pcVar10)(lVar8 + uVar11 * 0x90 + 0x30);
        }
        if (*(code **)(lVar2 + -0x70) != (code *)0x0) {
          (**(code **)(lVar2 + -0x70))(lVar2 + -0x60,lVar8 + uVar11 * 0x90 + 0x30);
          uVar1 = *(undefined8 *)(lVar2 + -0x80);
          uVar3 = *(undefined8 *)(lVar2 + -0x78);
          uVar4 = *(undefined8 *)(lVar2 + -0x68);
          puVar9[4] = *(undefined8 *)(lVar2 + -0x70);
          puVar9[5] = uVar4;
          puVar9[2] = uVar1;
          puVar9[3] = uVar3;
        }
        lVar8 = *(long *)(param_1 + 0x48);
        pcVar10 = *(code **)(lVar8 + -0x78);
        if (pcVar10 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x70) = 0;
          *(undefined8 *)(lVar8 + -0x68) = 0;
          *(undefined8 *)(lVar8 + -0x80) = 0;
          *(undefined8 *)(lVar8 + -0x78) = 0;
          (*pcVar10)(lVar8 + -0x60);
        }
        uVar11 = uVar11 - 1;
        *(long *)(param_1 + 0x48) = lVar8 + -0x90;
      }
      lVar8 = *(long *)(param_1 + 0x40);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)((*(long *)(param_1 + 0x48) - lVar8 >> 4) * -0x71c71c71c71c71c7));
  }
  plVar5 = (long *)(param_1 + 0x18);
  if ((((*plVar5 == 0) || (plVar5 = (long *)(param_1 + 0x20), *plVar5 == 0)) ||
      (plVar5 = (long *)(param_1 + 0x28), *plVar5 == 0)) ||
     (plVar5 = (long *)(param_1 + 0x30), *plVar5 == 0)) {
    plVar7 = (long *)FUN_006a1cd0(param_2);
    *plVar5 = *plVar7;
    return;
  }
  return;
}


