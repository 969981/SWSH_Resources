/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4b40; name: FUN_012b4b40
 */


ulong FUN_012b4b40(undefined8 *param_1,ulong *param_2)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  ushort *puVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  
  piVar3 = (int *)*param_1;
  if (((((piVar3 != (int *)0x0) && (*(uint *)(param_1 + 1) != 0xffffffff)) &&
       (puVar4 = (ushort *)((long)piVar3 - (long)*piVar3), 4 < *puVar4)) &&
      (((ulong)puVar4[2] != 0 &&
       (puVar6 = (uint *)((long)piVar3 + (ulong)puVar4[2]), lVar8 = (long)puVar6 + (ulong)*puVar6,
       lVar8 != 0)))) &&
     (puVar6 = (uint *)(lVar8 + (ulong)*(uint *)(param_1 + 1) * 4 + 4),
     piVar1 = (int *)((long)puVar6 + (ulong)*puVar6), piVar1 != (int *)0x0)) {
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar7 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)((long)piVar1 + uVar7);
      if (uVar5 == 0xffffffff) goto switchD_012b4c18_default;
    }
    puVar6 = (uint *)((long)((long)piVar3 + (ulong)puVar4[3]) +
                     (ulong)uVar5 * 4 + (ulong)*(uint *)((long)piVar3 + (ulong)puVar4[3]) + 4);
    piVar3 = (int *)((long)puVar6 + (ulong)*puVar6);
    puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
    if ((4 < *puVar4) && ((ulong)puVar4[2] != 0)) {
      switch(*(undefined1 *)((long)piVar3 + (ulong)puVar4[2])) {
      case 1:
        piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar3 + (ulong)puVar4[3]));
        if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
          return 0;
        }
        uVar7 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        if (uVar7 == 0) {
          return 0;
        }
        return (long)*(int *)((long)piVar3 + uVar7);
      case 2:
        piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar3 + (ulong)puVar4[3]));
        if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
          return 0;
        }
        uVar7 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        if (uVar7 == 0) {
          return 0;
        }
        return (long)*(float *)((long)piVar3 + uVar7);
      case 3:
        piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar3 + (ulong)puVar4[3]));
        puVar6 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        uVar5 = *puVar6;
        uVar7 = 0xcbf29ce484222645;
        if (uVar5 != 0) {
          puVar6 = puVar6 + 1;
          if (uVar5 != 1) {
            lVar8 = 0;
            do {
              pbVar2 = (byte *)((long)puVar6 + lVar8);
              lVar8 = lVar8 + 2;
              uVar7 = ((uVar7 ^ *pbVar2) * 0x100000001b3 ^ (ulong)pbVar2[1]) * 0x100000001b3;
            } while ((ulong)uVar5 - ((ulong)uVar5 & 1) != lVar8);
            puVar6 = (uint *)((long)puVar6 + lVar8);
          }
          if ((uVar5 & 1) != 0) {
            return (uVar7 ^ (byte)*puVar6) * 0x100000001b3;
          }
        }
        break;
      case 4:
        piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar3 + (ulong)puVar4[3]));
        if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
          return 0;
        }
        uVar7 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        if (uVar7 == 0) {
          return 0;
        }
        uVar7 = *(ulong *)((long)piVar3 + uVar7);
        break;
      default:
        goto switchD_012b4c18_default;
      }
      return uVar7;
    }
  }
switchD_012b4c18_default:
  return *param_2;
}


