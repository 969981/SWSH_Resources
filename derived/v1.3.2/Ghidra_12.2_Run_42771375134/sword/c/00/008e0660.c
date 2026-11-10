/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e0660; name: FUN_008e0660
 */


void FUN_008e0660(long param_1,ulong param_2,uint param_3,uint param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  undefined4 uVar7;
  float fVar8;
  
  cVar1 = *(char *)(param_1 + 0x298);
  if ((param_2 & 1) != 0) {
    uVar4 = FUN_0087afd0(*(undefined8 *)(param_1 + 0x60));
    *(undefined2 *)(param_1 + 0x74) = uVar4;
    if (cVar1 == '\0') {
      uVar5 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),0);
      cVar2 = *(char *)(param_1 + 0x273);
    }
    else {
      uVar5 = FUN_00879f50();
      cVar2 = *(char *)(param_1 + 0x273);
    }
    if (cVar2 != '\0') {
      fVar8 = (float)FUN_008e5ec0(*(undefined8 *)(param_1 + 0x278));
      uVar5 = (ushort)(int)(fVar8 * (float)uVar5);
    }
    *(ushort *)(param_1 + 0x72) = uVar5;
  }
  uVar7 = FUN_0087b350(*(undefined8 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  FUN_008e0a20(param_1,param_4 & 1,param_3 & 1,cVar1 != '\0');
  if ((param_4 & 1) != 0) {
    uVar4 = FUN_0087cdb0(*(undefined8 *)(param_1 + 0x60));
    *(undefined2 *)(param_1 + 0x338) = uVar4;
  }
  uVar3 = FUN_008783c0(*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x33d) = uVar3;
  if ((param_5 & 1) != 0) {
    sVar6 = FUN_008ec470(*(undefined2 *)(param_1 + 0x70),uVar3,0x22);
    if (sVar6 == 0) {
      sVar6 = 1;
    }
    *(short *)(param_1 + 0x33a) = sVar6;
  }
  return;
}


