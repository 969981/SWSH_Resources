/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00912770; name: FUN_00912770
 */


void FUN_00912770(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  param_1[1] = 0;
  param_2[1] = 0;
  param_3[1] = 0;
  uVar3 = FUN_008f37f0(param_4,0);
  if ((uVar3 & 1) == 0) {
LAB_00912844:
    uVar3 = FUN_008f37f0(param_4,1);
    if ((uVar3 & 1) == 0) goto LAB_00912910;
LAB_00912854:
    uVar3 = FUN_008f8ca0(param_4,1);
    uVar4 = FUN_008df3c0(param_5,1);
    cVar1 = FUN_009141c0();
    if (cVar1 != '\0') {
      cVar1 = FUN_009141d0(uVar4);
      uVar5 = uVar3 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_009141c0(uVar4);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    uVar5 = FUN_008fa510(param_4);
    if (((uVar5 & 1) == 0) || (sVar2 = FUN_00914660(param_6,1), sVar2 != 0)) goto LAB_00912910;
    param_3[uVar3 & 0xff] = param_3[uVar3 & 0xff] + '\x01';
    uVar3 = FUN_008f37f0(param_4,2);
    if ((uVar3 & 1) != 0) goto LAB_00912920;
LAB_00912998:
    uVar3 = FUN_008f37f0(param_4,3);
  }
  else {
    uVar3 = FUN_008f8ca0(param_4,0);
    uVar4 = FUN_008df3c0(param_5,0);
    cVar1 = FUN_009141c0();
    if (cVar1 != '\0') {
      cVar1 = FUN_009141d0(uVar4);
      uVar5 = uVar3 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_009141c0(uVar4);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    uVar5 = FUN_008fa510(param_4);
    if (((uVar5 & 1) == 0) || (sVar2 = FUN_00914660(param_6,0), sVar2 != 0)) goto LAB_00912844;
    param_3[uVar3 & 0xff] = param_3[uVar3 & 0xff] + '\x01';
    uVar3 = FUN_008f37f0(param_4,1);
    if ((uVar3 & 1) != 0) goto LAB_00912854;
LAB_00912910:
    uVar3 = FUN_008f37f0(param_4,2);
    if ((uVar3 & 1) == 0) goto LAB_00912998;
LAB_00912920:
    uVar3 = FUN_008f8ca0(param_4,2);
    uVar4 = FUN_008df3c0(param_5,2);
    cVar1 = FUN_009141c0();
    if (cVar1 != '\0') {
      cVar1 = FUN_009141d0(uVar4);
      uVar5 = uVar3 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_009141c0(uVar4);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    uVar5 = FUN_008fa510(param_4);
    if (((uVar5 & 1) == 0) || (sVar2 = FUN_00914660(param_6,2), sVar2 != 0)) goto LAB_00912998;
    param_3[uVar3 & 0xff] = param_3[uVar3 & 0xff] + '\x01';
    uVar3 = FUN_008f37f0(param_4,3);
  }
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_008f8ca0(param_4,3);
    uVar4 = FUN_008df3c0(param_5,3);
    cVar1 = FUN_009141c0();
    if (cVar1 != '\0') {
      cVar1 = FUN_009141d0(uVar4);
      uVar5 = uVar3 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_009141c0(uVar4);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    uVar5 = FUN_008fa510(param_4);
    if (((uVar5 & 1) != 0) && (sVar2 = FUN_00914660(param_6,3), sVar2 == 0)) {
      param_3[uVar3 & 0xff] = param_3[uVar3 & 0xff] + '\x01';
      uVar3 = FUN_008f37f0(param_4,4);
      goto joined_r0x00912a3c;
    }
  }
  uVar3 = FUN_008f37f0(param_4,4);
joined_r0x00912a3c:
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_008f8ca0(param_4,4);
    uVar4 = FUN_008df3c0(param_5,4);
    cVar1 = FUN_009141c0();
    if (cVar1 != '\0') {
      cVar1 = FUN_009141d0(uVar4);
      uVar5 = uVar3 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_009141c0(uVar4);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    uVar5 = FUN_008fa510(param_4);
    if (((uVar5 & 1) != 0) && (sVar2 = FUN_00914660(param_6,4), sVar2 == 0)) {
      param_3[uVar3 & 0xff] = param_3[uVar3 & 0xff] + '\x01';
    }
  }
  return;
}


