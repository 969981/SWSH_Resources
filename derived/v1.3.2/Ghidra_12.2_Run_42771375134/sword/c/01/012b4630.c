/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4630; name: FUN_012b4630
 */


undefined1  [16] FUN_012b4630(undefined1 param_1 [16],undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ushort *puVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  double dVar9;
  undefined8 uVar11;
  undefined1 auVar10 [16];
  
  uVar11 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  piVar2 = (int *)*param_2;
  if (((((piVar2 != (int *)0x0) && (*(uint *)(param_2 + 1) != 0xffffffff)) &&
       (puVar4 = (ushort *)((long)piVar2 - (long)*piVar2), 4 < *puVar4)) &&
      (((ulong)puVar4[2] != 0 &&
       (puVar7 = (uint *)((long)piVar2 + (ulong)puVar4[2]), lVar3 = (long)puVar7 + (ulong)*puVar7,
       lVar3 != 0)))) &&
     (puVar7 = (uint *)(lVar3 + (ulong)*(uint *)(param_2 + 1) * 4 + 4),
     piVar1 = (int *)((long)puVar7 + (ulong)*puVar7), piVar1 != (int *)0x0)) {
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)((long)piVar1 + uVar8);
      if (uVar6 == 0xffffffff) goto switchD_012b4708_default;
    }
    puVar7 = (uint *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                     (ulong)uVar6 * 4 + (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]) + 4);
    piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
    puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
    if ((4 < *puVar4) && ((ulong)puVar4[2] != 0)) {
      switch(*(undefined1 *)((long)piVar2 + (ulong)puVar4[2])) {
      case 1:
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]));
        uVar5 = 0;
        uVar11 = 0;
        if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar8 != 0)) {
          return ZEXT416((uint)(float)*(int *)((long)piVar2 + uVar8));
        }
        break;
      case 2:
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]));
        uVar5 = 0;
        uVar11 = 0;
        if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar8 != 0)) {
          return ZEXT416(*(uint *)((long)piVar2 + uVar8));
        }
        break;
      case 3:
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]));
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 == 0)) {
          lVar3 = 0;
        }
        else {
          puVar7 = (uint *)((long)piVar2 + uVar5);
          lVar3 = (long)puVar7 + (ulong)*puVar7;
        }
        dVar9 = atof((char *)(lVar3 + 4));
        return ZEXT416((uint)(float)dVar9);
      case 4:
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]));
        uVar5 = 0;
        uVar11 = 0;
        if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar8 != 0)) {
          uVar5 = (ulong)(uint)(float)*(ulong *)((long)piVar2 + uVar8);
          uVar11 = 0;
        }
      }
    }
  }
switchD_012b4708_default:
  auVar10._8_8_ = uVar11;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


