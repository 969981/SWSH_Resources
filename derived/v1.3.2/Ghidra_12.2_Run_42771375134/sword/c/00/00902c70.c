/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00902c70; name: FUN_00902c70
 */


void FUN_00902c70(long param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  *param_2 = param_3;
  *(byte *)(param_2 + 1) = param_4;
  *(bool *)((long)param_2 + 9) = *(byte *)(param_1 + 0x34b) < param_4;
  uVar5 = FUN_009a3a00(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x70),
                       *(undefined1 *)(param_1 + 0x2a6));
  if (((uVar5 & 1) == 0) || (*(char *)(param_1 + 0x2b7) != '\0')) {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_009a3be0(*(undefined8 *)(param_1 + 0x70),param_3);
    bVar2 = bVar2 & 1;
  }
  *(byte *)((long)param_2 + 10) = bVar2;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 2;
  *(undefined2 *)((long)param_2 + 0xb) = 0x101;
  FUN_008f9090(*(undefined8 *)(param_1 + 0x58));
  uVar5 = FUN_009a7a90();
  if (((uVar5 & 1) == 0) || (iVar3 = FUN_008f3790(*(undefined8 *)(param_1 + 0x58)), iVar3 == 1)) {
    *(undefined1 *)((long)param_2 + 0xb) = 0;
  }
  uVar5 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x4000);
  if ((uVar5 & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0x14) = 0x200000002;
    *(undefined2 *)((long)param_2 + 0xb) = 0;
    return;
  }
  uVar5 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x800);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x20000000);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)((long)param_2 + 0x14) = 2;
    }
    iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
    if (iVar3 == 2) {
      iVar3 = FUN_008f8110();
      if ((iVar3 == 2) && (cVar1 = FUN_009141d0(*(undefined8 *)(param_1 + 0x340)), cVar1 == '\0')) {
        param_2[2] = 0x200000002;
        *(undefined4 *)(param_2 + 4) = 0;
      }
      goto LAB_00902d44;
    }
    uVar4 = FUN_008f3790(*(undefined8 *)(param_1 + 0x58));
    if (((uVar4 | 1) != 3) &&
       (uVar5 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x58),4), (uVar5 & 1) == 0)) {
      return;
    }
  }
  *(undefined4 *)((long)param_2 + 0x14) = 2;
LAB_00902d44:
  *(undefined1 *)((long)param_2 + 0xb) = 0;
  return;
}


