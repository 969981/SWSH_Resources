/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01077da0; name: FUN_01077da0
 */


void FUN_01077da0(long *param_1,ulong param_2,long param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  uVar6 = param_2 & 0xffffffff;
  uVar2 = *(uint *)(PTR_DAT_02723de8 +
                   (-(uVar6 >> 7 & 1) & 0xfffffffffffffc00 | (param_2 & 0xff) << 2) +
                   (long)*(char *)(*(long *)(*param_1 + 0x1f8) + 0x58) * 0x20);
  if (uVar2 <= *(uint *)(param_3 + 8)) {
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar7 == 0) {
      iVar3 = FUN_01521090(0,0x62f);
    }
    else {
      plVar8 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar3 = FUN_01521090(lVar7,0x62f);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (iVar3 == 0) {
      return;
    }
  }
  uVar4 = FUN_0106ff80(uVar6,param_3);
  uVar1 = *(uint *)(param_3 + 8);
  uVar5 = FUN_0106f510(uVar6,*(undefined1 *)(*(long *)(*param_1 + 0x1f8) + 0x58));
  FUN_01077ed0(param_1,uVar6,uVar4,uVar2 <= uVar1,*param_4 + (uVar5 & 0xff) * 0x58);
  return;
}


