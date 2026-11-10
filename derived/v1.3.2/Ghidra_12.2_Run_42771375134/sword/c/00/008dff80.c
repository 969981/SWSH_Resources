/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dff80; name: FUN_008dff80
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008dff80(long param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  float fVar8;
  
  FUN_0087f070(*param_2);
  FUN_00866390(*(undefined8 *)(param_1 + 0x60),*param_2);
  *(undefined1 *)(param_1 + 0x273) = 0;
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 6);
  uVar4 = FUN_008783b0(*param_2);
  *(undefined2 *)(param_1 + 0x70) = uVar4;
  uVar4 = FUN_0087afd0(*param_2);
  *(undefined2 *)(param_1 + 0x74) = uVar4;
  uVar5 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),0);
  if (*(char *)(param_1 + 0x273) != '\0') {
    fVar8 = (float)FUN_008e5ec0(*(undefined8 *)(param_1 + 0x278));
    uVar5 = (ushort)(int)(fVar8 * (float)uVar5);
  }
  *(ushort *)(param_1 + 0x72) = uVar5;
  uVar6 = FUN_008787f0(*param_2);
  uVar5 = 0;
  if (uVar6 < 0x648) {
    uVar5 = uVar6;
  }
  *(ushort *)(param_1 + 0x76) = uVar5;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x244) = 0;
  *(undefined1 *)(param_1 + 0x246) = 0x1f;
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xff1f;
  uVar7 = FUN_0087ec90(*param_2);
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  uVar3 = FUN_0087cd00(*param_2);
  *(undefined1 *)(param_1 + 0x80) = uVar3;
  uVar3 = FUN_00879070(*param_2,0);
  *(undefined1 *)(param_1 + 0x81) = uVar3;
  uVar3 = FUN_00879070(*param_2,1);
  *(undefined1 *)(param_1 + 0x82) = uVar3;
  uVar3 = FUN_00879070(*param_2,2);
  *(undefined1 *)(param_1 + 0x83) = uVar3;
  uVar3 = FUN_00879070(*param_2,3);
  *(undefined1 *)(param_1 + 0x84) = uVar3;
  uVar3 = FUN_00879070(*param_2,4);
  *(undefined1 *)(param_1 + 0x85) = uVar3;
  uVar3 = FUN_00879070(*param_2,5);
  *(undefined1 *)(param_1 + 0x86) = uVar3;
  uVar5 = FUN_008783c0(*param_2);
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xffe0 | uVar5 & 0x1f;
  uVar4 = FUN_0087cdb0(*param_2);
  *(undefined2 *)(param_1 + 0x7a) = uVar4;
  uVar3 = FUN_0087a5f0(*param_2);
  *(undefined1 *)(param_1 + 0x7c) = uVar3;
  uVar3 = FUN_008ec470(*(undefined2 *)(param_1 + 0x70),*(ushort *)(param_1 + 0x87) & 0x1f,1);
  *(undefined1 *)(param_1 + 0x7e) = uVar3;
  uVar3 = FUN_008ec470(*(undefined2 *)(param_1 + 0x70),*(ushort *)(param_1 + 0x87) & 0x1f,3);
  uVar5 = *(ushort *)(param_1 + 0x87);
  *(undefined1 *)(param_1 + 0x272) = 0;
  *(undefined1 *)(param_1 + 0x7f) = uVar3;
  *(ushort *)(param_1 + 0x87) = uVar5 & 0xfeff;
  bVar1 = *(byte *)((long)param_2 + 0x32);
  *(undefined2 *)(param_1 + 0x298) = 0;
  *(undefined2 *)(param_1 + 0x270) = 0x1f00;
  *(ushort *)(param_1 + 0x87) = uVar5 & 0xfcff | (ushort)bVar1 << 9;
  FUN_008df9e0(param_1 + 0x250,param_2 + 2);
  FUN_008e03a0(param_1,param_1 + 700,*param_2);
  FUN_008e0660(param_1,1,1,1,1);
  uVar3 = FUN_008e0760(param_1,*param_2,1);
  *(undefined1 *)(param_1 + 0x33c) = uVar3;
  *(undefined1 *)(param_1 + 0x340) = 0;
  if (*(char *)(param_1 + 0x2b4) == '\x06') {
    cVar2 = *(char *)(param_1 + 0x2b5);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b4) = 6;
    cVar2 = *(char *)(param_1 + 0x2b5);
  }
  if (cVar2 == '\x06') {
    cVar2 = *(char *)(param_1 + 0x2b6);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b5) = 6;
    cVar2 = *(char *)(param_1 + 0x2b6);
  }
  if (cVar2 == '\x06') {
    cVar2 = *(char *)(param_1 + 0x2b7);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b6) = 6;
    cVar2 = *(char *)(param_1 + 0x2b7);
  }
  if (cVar2 == '\x06') {
    cVar2 = *(char *)(param_1 + 0x2b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b7) = 6;
    cVar2 = *(char *)(param_1 + 0x2b8);
  }
  if (cVar2 == '\x06') {
    cVar2 = *(char *)(param_1 + 0x2b9);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b8) = 6;
    cVar2 = *(char *)(param_1 + 0x2b9);
  }
  if (cVar2 == '\x06') {
    cVar2 = *(char *)(param_1 + 0x2ba);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b9) = 6;
    cVar2 = *(char *)(param_1 + 0x2ba);
  }
  if (cVar2 != '\x06') {
    *(undefined1 *)(param_1 + 0x2ba) = 6;
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_1 + 0x90),0,0x195);
}


