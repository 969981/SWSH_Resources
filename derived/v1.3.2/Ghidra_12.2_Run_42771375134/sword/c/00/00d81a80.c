/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d81a80; name: FUN_00d81a80
 */


void FUN_00d81a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_38;
  
  lVar5 = param_1 + 0x5dc;
  if (*(int *)(param_1 + 0x5dc) != 0xb) {
    iVar4 = FUN_00d71450(lVar5);
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + (long)iVar4 * 8 + 0x60);
    lVar5 = FUN_00d75680(*(long *)(param_1 + 0x5d0) + 0x60,lVar5,param_2);
    bVar3 = lVar8 == *(long *)(lVar5 + 0x18);
    goto LAB_00d81bdc;
  }
  lVar5 = FUN_00d75680(*(long *)(param_1 + 0x5d0) + 0x60,lVar5,param_2);
  local_38 = CONCAT71(local_38._1_7_,
                      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58));
  piVar6 = (int *)FUN_00d70a10(lVar5 + 0x18,&local_38);
  uVar7 = FUN_00d71370(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58);
  if ((uVar7 & 1) == 0) {
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
      bVar2 = *(long *)PTR_DAT_0271e438 == 0 || *(long *)(PTR_DAT_0271e438 + 8) == 0;
    }
    else {
      uVar1 = ((ushort *)((long)piVar6 - (long)*piVar6))[2];
      uVar7 = (ulong)uVar1;
      if (uVar7 == 0) {
        if (*(long *)PTR_DAT_0271e438 != 0) goto LAB_00d81ba4;
      }
      else if (*(long *)((long)piVar6 + uVar7) != *(long *)PTR_DAT_0271e438) {
LAB_00d81ba4:
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)((long)piVar6 + uVar7);
        }
        bVar2 = lVar5 == *(long *)(PTR_DAT_0271e438 + 8);
        goto LAB_00d81bc0;
      }
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
LAB_00d81bc0:
  bVar3 = FUN_00d70df0(piVar6,*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58,bVar2 ^ 1);
LAB_00d81bdc:
  lVar5 = FUN_00d70830(param_3);
  local_38 = *(undefined8 *)(lVar5 + 0x38);
  lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | bVar3 & 1;
  return;
}


