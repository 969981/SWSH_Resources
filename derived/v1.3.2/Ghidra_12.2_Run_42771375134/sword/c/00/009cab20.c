/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cab20; name: FUN_009cab20
 */


void FUN_009cab20(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int local_24;
  
  FUN_009cbee0(*(undefined8 *)(param_1 + 0x80));
  switch(*(undefined4 *)(param_1 + 0x2530)) {
  case 0:
    FUN_009cb540(*(undefined8 *)(param_1 + 0x80));
    uVar2 = 1;
    goto LAB_009cad2c;
  case 1:
    uVar1 = FUN_009cc500(*(undefined8 *)(param_1 + 0x80));
    if ((uVar1 & 1) == 0) {
      if ((*(char *)(param_1 + 0x2545) == '\0') ||
         (uVar1 = FUN_009cc350(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) == 0)) break;
      uVar2 = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x2530) = 2;
      uVar2 = 2;
    }
    goto LAB_009cad2c;
  case 2:
    uVar1 = FUN_009cc500(*(undefined8 *)(param_1 + 0x80));
    if ((uVar1 & 1) != 0) {
      if ((*(byte *)(*(long *)(param_1 + 0x60) + 0xb40) >> 4 & 1) != 0) goto LAB_009cac20;
      uVar2 = 3;
      goto LAB_009cad2c;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x2547) != '\0') {
      *(undefined4 *)(param_1 + 0x2530) = 4;
    }
    uVar1 = FUN_009cccd0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar1 & 1) != 0) {
LAB_009cac20:
      uVar2 = 7;
      goto LAB_009cad2c;
    }
    break;
  case 4:
    uVar1 = FUN_009cc580(*(undefined8 *)(param_1 + 0x80),param_1 + 0x68);
    if ((uVar1 & 1) != 0) {
      uVar2 = 5;
      goto LAB_009cad2c;
    }
    break;
  case 5:
    uVar1 = FUN_009cccd0(*(undefined8 *)(param_1 + 0x80));
    if (((uVar1 & 1) != 0) &&
       (uVar1 = FUN_009ccce0(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) != 0)) {
      uVar2 = 6;
      goto LAB_009cad2c;
    }
    break;
  case 6:
    uVar1 = FUN_009cd0b0(*(undefined8 *)(param_1 + 0x80));
    if (((uVar1 & 1) != 0) &&
       (uVar1 = FUN_009cd0c0(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) != 0)) goto LAB_009cad28;
    break;
  case 7:
    uVar1 = FUN_009cd490(*(undefined8 *)(param_1 + 0x80));
    if ((uVar1 & 1) != 0) {
      if ((*(byte *)(*(long *)(param_1 + 0x60) + 0xb40) >> 4 & 1) != 0) {
        FUN_009ce960(*(undefined8 *)(param_1 + 0x80),param_1 + 0x68);
      }
      goto LAB_009cad28;
    }
    break;
  case 8:
    if ((*(char *)(param_1 + 0x2546) != '\0') &&
       (uVar1 = FUN_009cc510(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x2530) = 0xc;
    }
    uVar1 = FUN_009cd810(*(undefined8 *)(param_1 + 0x80),&local_24,&local_28);
    if (((uVar1 & 1) != 0) && (local_24 == 1)) {
      *(undefined8 *)(param_1 + 0x2530) = 9;
    }
    uVar1 = FUN_009cd810(*(undefined8 *)(param_1 + 0x80),&local_24,&local_28);
    if (((uVar1 & 1) == 0) || (local_24 != 1)) break;
    *(undefined8 *)(param_1 + 0x2530) = 9;
    if (*(long *)(param_1 + 0x4a0) == 0) goto LAB_009cad50;
    goto LAB_009cad38;
  case 9:
  case 10:
    if ((*(char *)(param_1 + 0x2546) == '\0') ||
       (uVar1 = FUN_009cc510(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x2530) = 10;
      uVar1 = FUN_009cd810(*(undefined8 *)(param_1 + 0x80),&local_24,&local_28);
      if (((uVar1 & 1) == 0) || (local_24 != 2)) break;
      *(undefined4 *)(param_1 + 0x2534) = local_28;
      uVar2 = 0xb;
    }
    else {
      uVar2 = 0xc;
    }
    goto LAB_009cad2c;
  case 0xb:
    FUN_009cd800(*(undefined8 *)(param_1 + 0x80));
LAB_009cad28:
    uVar2 = 8;
LAB_009cad2c:
    *(undefined4 *)(param_1 + 0x2530) = uVar2;
  }
  if (*(long *)(param_1 + 0x4a0) != 0) {
LAB_009cad38:
    uVar1 = FUN_009cd4a0(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x4a8),
                         param_1 + 0xa0);
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x4a0) = 0;
    }
  }
LAB_009cad50:
  if ((*(char *)(param_1 + 0x2549) != '\0') &&
     (uVar1 = FUN_009cde80(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x253c),
                           *(undefined4 *)(param_1 + 0x2540)), (uVar1 & 1) != 0)) {
    *(char *)(param_1 + 0x2549) = '\0';
  }
  return;
}


