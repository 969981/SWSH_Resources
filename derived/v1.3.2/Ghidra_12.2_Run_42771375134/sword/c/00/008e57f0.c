/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e57f0; name: FUN_008e57f0
 */


void FUN_008e57f0(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 0x273) = 1;
  local_30[0] = param_2;
  local_28 = param_3;
  FUN_008e5e40(*(undefined8 *)(param_1 + 0x278),local_30);
  if ((*(ushort *)(param_1 + 0x87) >> 9 & 1) == 0) {
    lVar1 = 0x70;
    if ((*(ushort *)(param_1 + 0x87) & 0x20) != 0) {
      lVar1 = 0x2a0;
    }
    iVar4 = FUN_008ec470(*(undefined2 *)(param_1 + lVar1),*(undefined1 *)(param_1 + 0x33d),0x35);
    if (iVar4 != 0) {
      cVar2 = *(char *)(param_1 + 0x298);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      goto joined_r0x008e58b0;
    }
  }
  FUN_008e5920(param_1);
  cVar2 = *(char *)(param_1 + 0x298);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
joined_r0x008e58b0:
  if (cVar2 == '\0') {
    uVar3 = FUN_00879910(uVar5,0);
    cVar2 = *(char *)(param_1 + 0x273);
  }
  else {
    uVar3 = FUN_00879f50();
    cVar2 = *(char *)(param_1 + 0x273);
  }
  if (cVar2 != '\0') {
    fVar6 = (float)FUN_008e5ec0(*(undefined8 *)(param_1 + 0x278));
    uVar3 = (ushort)(int)(fVar6 * (float)uVar3);
  }
  *(ushort *)(param_1 + 0x72) = uVar3;
  *(ushort *)(param_1 + 0x74) = uVar3;
  return;
}


