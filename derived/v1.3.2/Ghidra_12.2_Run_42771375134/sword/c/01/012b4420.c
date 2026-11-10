/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4420; name: FUN_012b4420
 */


int FUN_012b4420(undefined8 *param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  
  piVar4 = (int *)*param_1;
  if (((((piVar4 != (int *)0x0) && (*(uint *)(param_1 + 1) != 0xffffffff)) &&
       (puVar5 = (ushort *)((long)piVar4 - (long)*piVar4), 4 < *puVar5)) &&
      (((ulong)puVar5[2] != 0 &&
       (puVar7 = (uint *)((long)piVar4 + (ulong)puVar5[2]), lVar1 = (long)puVar7 + (ulong)*puVar7,
       lVar1 != 0)))) &&
     (puVar7 = (uint *)(lVar1 + (ulong)*(uint *)(param_1 + 1) * 4 + 4),
     piVar2 = (int *)((long)puVar7 + (ulong)*puVar7), piVar2 != (int *)0x0)) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
       (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar8 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)((long)piVar2 + uVar8);
      if (uVar6 == 0xffffffff) {
        return param_2;
      }
    }
    puVar7 = (uint *)((long)((long)piVar4 + (ulong)puVar5[3]) +
                     (ulong)uVar6 * 4 + (ulong)*(uint *)((long)piVar4 + (ulong)puVar5[3]) + 4);
    piVar4 = (int *)((long)puVar7 + (ulong)*puVar7);
    puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
    if ((4 < *puVar5) && ((ulong)puVar5[2] != 0)) {
      switch(*(undefined1 *)((long)piVar4 + (ulong)puVar5[2])) {
      case 1:
        piVar4 = (int *)((long)((long)piVar4 + (ulong)puVar5[3]) +
                        (ulong)*(uint *)((long)piVar4 + (ulong)puVar5[3]));
        if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
          return 0;
        }
        uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        if (uVar8 == 0) {
          return 0;
        }
        break;
      case 2:
        piVar4 = (int *)((long)((long)piVar4 + (ulong)puVar5[3]) +
                        (ulong)*(uint *)((long)piVar4 + (ulong)puVar5[3]));
        if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
          return 0;
        }
        uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        if (uVar8 == 0) {
          return 0;
        }
        return (int)*(float *)((long)piVar4 + uVar8);
      case 3:
        piVar4 = (int *)((long)((long)piVar4 + (ulong)puVar5[3]) +
                        (ulong)*(uint *)((long)piVar4 + (ulong)puVar5[3]));
        if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
          iVar3 = atoi(&DAT_00000004);
          return iVar3;
        }
        uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        if (uVar8 == 0) {
          iVar3 = atoi(&DAT_00000004);
          return iVar3;
        }
        puVar7 = (uint *)((long)piVar4 + uVar8);
        iVar3 = atoi((char *)((long)puVar7 + (ulong)*puVar7 + 4));
        return iVar3;
      case 4:
        piVar4 = (int *)((long)((long)piVar4 + (ulong)puVar5[3]) +
                        (ulong)*(uint *)((long)piVar4 + (ulong)puVar5[3]));
        if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
          return 0;
        }
        uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        if (uVar8 == 0) {
          return 0;
        }
        break;
      default:
        goto switchD_012b44f8_default;
      }
      param_2 = *(int *)((long)piVar4 + uVar8);
    }
  }
switchD_012b44f8_default:
  return param_2;
}


