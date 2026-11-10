/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a3100; name: FUN_014a3100
 */


void FUN_014a3100(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  lVar7 = lVar4 - lVar3 >> 5;
  uVar8 = lVar7 * -0x71c71c71c71c71c7;
  if (uVar8 < param_2) {
    FUN_014a8d10(param_1,param_2 + lVar7 * 0x71c71c71c71c71c7);
    return;
  }
  if (uVar8 != param_2) {
    lVar7 = lVar3 + param_2 * 0x120;
    if (lVar7 != lVar4) {
      lVar9 = 0;
      puVar1 = PTR_DAT_02710800 + 0x10;
      do {
        lVar2 = lVar4 + lVar9;
        *(undefined **)(lVar2 + -0x120) = puVar1;
        plVar10 = (long *)(lVar2 + -0x118);
        if (*plVar10 == 0) {
          *plVar10 = 0;
          pcVar6 = *(code **)(lVar2 + -0x88);
        }
        else {
          FUN_006e2100();
          lVar5 = *plVar10;
          *plVar10 = 0;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          }
          pcVar6 = *(code **)(lVar2 + -0x88);
        }
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar2 + -0x80) = 0;
          *(undefined8 *)(lVar2 + -0x78) = 0;
          *(undefined8 *)(lVar2 + -0x90) = 0;
          *(undefined8 *)(lVar2 + -0x88) = 0;
          (*pcVar6)(lVar2 + -0x70);
        }
        pcVar6 = *(code **)(lVar2 + -0x108);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar2 + -0x100) = 0;
          *(undefined8 *)(lVar2 + -0xf8) = 0;
          *(undefined8 *)(lVar2 + -0x108) = 0;
          *(undefined8 *)(lVar2 + -0x110) = 0;
          (*pcVar6)(lVar2 + -0xf0);
        }
        if (*plVar10 != 0) {
          (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
          *plVar10 = 0;
        }
        lVar9 = lVar9 + -0x120;
      } while ((lVar3 + param_2 * 0x120) - lVar4 != lVar9);
    }
    param_1[1] = lVar7;
  }
  return;
}


