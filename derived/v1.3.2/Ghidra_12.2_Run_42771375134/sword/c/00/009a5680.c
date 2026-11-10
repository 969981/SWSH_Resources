/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a5680; name: FUN_009a5680
 */


void FUN_009a5680(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined2 uVar9;
  short sVar10;
  ulong uVar11;
  
  uVar9 = FUN_008e1290(param_3);
  uVar1 = *(undefined1 *)(param_3 + 0x33d);
  cVar2 = FUN_008ec470(uVar9,uVar1,10);
  cVar3 = FUN_008ec470(uVar9,uVar1,0xb);
  cVar4 = FUN_008ec470(uVar9,uVar1,0xc);
  cVar5 = FUN_008ec470(uVar9,uVar1,0xd);
  cVar6 = FUN_008ec470(uVar9,uVar1,0xe);
  cVar7 = FUN_008ec470(uVar9,uVar1,0xf);
  sVar10 = FUN_008e2d10(param_2);
  if (sVar10 == 0xd7) {
    cVar2 = cVar2 << 1;
    cVar3 = cVar3 << 1;
    cVar4 = cVar4 << 1;
    cVar5 = cVar5 << 1;
    cVar6 = cVar6 << 1;
    cVar7 = cVar7 << 1;
  }
  sVar10 = FUN_008e2d10(param_2);
  if (sVar10 == 0x126) {
    cVar8 = FUN_008ec3f0(0x126,6);
    cVar2 = cVar2 + cVar8;
  }
  sVar10 = FUN_008e2d10(param_2);
  if (sVar10 == 0x121) {
    cVar8 = FUN_008ec3f0(0x121,6);
    cVar3 = cVar3 + cVar8;
  }
  sVar10 = FUN_008e2d10(param_2);
  if (sVar10 == 0x122) {
    cVar8 = FUN_008ec3f0(0x122,6);
    cVar4 = cVar4 + cVar8;
  }
  sVar10 = FUN_008e2d10(param_2);
  if (sVar10 == 0x125) {
    cVar8 = FUN_008ec3f0(0x125,6);
    cVar5 = cVar5 + cVar8;
  }
  sVar10 = FUN_008e2d10(param_2);
  if (sVar10 == 0x123) {
    cVar8 = FUN_008ec3f0(0x123,6);
    cVar6 = cVar6 + cVar8;
  }
  sVar10 = FUN_008e2d10(param_2);
  if (sVar10 == 0x124) {
    cVar8 = FUN_008ec3f0(0x124,6);
    cVar7 = cVar7 + cVar8;
  }
  uVar11 = FUN_008e5700(param_2);
  if ((uVar11 & 1) != 0) {
    cVar2 = cVar2 << 1;
    cVar3 = cVar3 << 1;
    cVar4 = cVar4 << 1;
    cVar5 = cVar5 << 1;
    cVar6 = cVar6 << 1;
    cVar7 = cVar7 << 1;
  }
  *(char *)(param_1 + 4) = cVar2;
  *(char *)(param_1 + 5) = cVar3;
  *(char *)(param_1 + 6) = cVar4;
  *(char *)(param_1 + 7) = cVar5;
  *(char *)(param_1 + 8) = cVar6;
  *(char *)(param_1 + 9) = cVar7;
  return;
}


