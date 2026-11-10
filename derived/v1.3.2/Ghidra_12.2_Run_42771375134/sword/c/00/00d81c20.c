/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d81c20; name: FUN_00d81c20
 */


void FUN_00d81c20(long param_1,uint *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_38;
  
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x5f0) + 0xe0) + (ulong)*param_2 * 0x10);
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(int *)(param_1 + 0x5dc) == 0xb) {
    local_38 = CONCAT71(local_38._1_7_,
                        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58));
    piVar3 = (int *)FUN_00d70a10(lVar8 + 0x18,&local_38);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2d) ||
       (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x16], uVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)piVar3 + uVar6);
    }
    bVar2 = FUN_0153a760(lVar7,uVar5);
  }
  else {
    bVar2 = FUN_0153a590(lVar7,*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10));
  }
  lVar8 = FUN_00d70830(param_3);
  local_38 = *(undefined8 *)(lVar8 + 0x38);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  bVar1 = *(byte *)(lVar4 + 0x58);
  local_38 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | (bVar1 & 1) == 0 & bVar2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


