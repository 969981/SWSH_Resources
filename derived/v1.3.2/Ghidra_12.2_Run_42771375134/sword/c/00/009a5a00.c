/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a5a00; name: FUN_009a5a00
 */


void FUN_009a5a00(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float __x;
  
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  if ((*(char *)(param_1 + 0x20) == '\0') && (*(char *)(param_1 + 0x21) == '\0')) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0x10)) {
    uVar2 = *(uint *)(param_1 + 8);
  }
  uVar1 = uVar2 * *(int *)(param_1 + 0xc);
  if (uVar1 < 5) {
    uVar4 = 1;
  }
  else {
    uVar4 = (ulong)uVar1 / 5;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar1 = (uint)(uVar4 >> 1);
      if (uVar4 >> 1 == 0) {
        uVar1 = 1;
      }
      uVar4 = (ulong)uVar1;
      *param_2 = uVar1;
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  else {
    *param_2 = (uint)uVar4;
  }
  fVar7 = (float)(uVar2 & 0xffff);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x14));
  __x = fVar7 + fVar7 + 10.0;
  fVar7 = fVar7 + fVar5 + 10.0;
  fVar5 = SQRT(__x);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(__x);
  }
  fVar6 = SQRT(fVar7);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar7);
  }
  uVar2 = (uint)(((__x * __x * fVar5) / (fVar6 * fVar7 * fVar7)) * (float)uVar4 + 1.0);
  *param_2 = uVar2;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar3 = 0x1800;
    if (*(int *)(param_1 + 4) != *(int *)(param_1 + 0x1c)) {
      uVar3 = 0x1b33;
    }
    uVar2 = FUN_008ec010(uVar2,uVar3);
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar2 = FUN_008ec010(uVar2,0x1800);
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (*(char *)(param_1 + 0x23) != '\0') {
    uVar2 = FUN_008ec010(uVar2,0x1333);
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (0xdb < *(uint *)(param_1 + 0x18)) {
    uVar2 = FUN_008ec010(uVar2,0x1333);
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (*(char *)(param_1 + 0x25) != '\0') {
    uVar2 = FUN_008ec010(uVar2,0x1800);
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  return;
}


