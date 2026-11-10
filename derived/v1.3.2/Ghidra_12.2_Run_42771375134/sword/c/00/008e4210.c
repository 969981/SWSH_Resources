/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4210; name: FUN_008e4210
 */


void FUN_008e4210(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  cVar3 = *(char *)(param_1 + 0x298);
  uVar4 = FUN_008e12a0(param_1,0xd);
  uVar5 = FUN_008e12a0(param_1,0xf);
  if (cVar3 == '\0') {
    uVar6 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),0);
    cVar3 = *(char *)(param_1 + 0x273);
  }
  else {
    uVar6 = FUN_00879f50();
    cVar3 = *(char *)(param_1 + 0x273);
  }
  if (cVar3 != '\0') {
    fVar7 = (float)FUN_008e5ec0(*(undefined8 *)(param_1 + 0x278));
    uVar6 = (uint)(fVar7 * (float)(uVar6 & 0xffff));
  }
  uVar1 = uVar6 & 0xffff;
  *(short *)(param_1 + 0x72) = (short)uVar6;
  if (uVar5 < uVar1) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x74) + (uVar1 - uVar5);
    uVar2 = uVar1;
    if ((uVar6 & 0xffff) <= uVar1) {
      uVar2 = uVar6;
    }
    *(short *)(param_1 + 0x74) = (short)uVar2;
  }
  if ((uVar1 < uVar5) && (uVar5 = uVar4 - uVar1, uVar1 <= uVar4 && uVar5 != 0)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x74);
    if ((uint)*(ushort *)(param_1 + 0x74) <= (uVar5 & 0xffff)) {
      uVar4 = uVar5;
    }
    *(short *)(param_1 + 0x74) = (short)uVar4 - (short)uVar5;
  }
  return;
}


