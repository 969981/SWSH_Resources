/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0061b250; name: FUN_0061b250
 */


undefined8 FUN_0061b250(long param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(ushort *)(param_1 + 0x1d0) <= param_2) {
    return 0x10;
  }
  lVar6 = *(long *)(param_1 + 0x378);
  if (lVar6 == 0) {
    return 7;
  }
  uVar3 = (**(code **)(lVar6 + 0x20))(0);
  *param_3 = uVar3;
  lVar4 = *(long *)(param_1 + 0x2f0);
  if (lVar4 == 0x25000) {
    if ((*(char *)(param_1 + 0x3f0) == '\0') && (iVar2 = FUN_0061db10(param_1), iVar2 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x3f8) <= param_2) {
      return 0;
    }
    pcVar5 = *(code **)(lVar6 + 0x20);
    param_2 = (int)*(char *)(*(long *)(param_1 + 0x400) + (ulong)param_2) + param_2;
  }
  else {
    if (lVar4 == 0x20000) {
      if ((*(char *)(param_1 + 0x3f0) == '\0') && (iVar2 = FUN_0061db10(param_1), iVar2 != 0)) {
        return 0;
      }
      if (*(ushort *)(param_1 + 0x3f8) <= param_2) {
        return 0;
      }
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x400) + (ulong)param_2 * 2);
      if (uVar1 < 0x102) {
        uVar3 = (**(code **)(lVar6 + 0x20))((uint)uVar1);
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x408) + (long)(int)(uVar1 - 0x102) * 8);
      }
      goto LAB_0061b334;
    }
    if (lVar4 != 0x10000) {
      return 0;
    }
    if (0x101 < param_2) {
      return 0;
    }
    pcVar5 = *(code **)(lVar6 + 0x20);
  }
  uVar3 = (*pcVar5)(param_2);
LAB_0061b334:
  *param_3 = uVar3;
  return 0;
}


