/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf3b40; name: FUN_00bf3b40
 */


void FUN_00bf3b40(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
    FUN_00bf7410(*(undefined8 *)(param_1 + 0xb8));
    return;
  default:
    return;
  case 5:
  case 0x58:
  case 0x6c:
    FUN_00bf97f0(*(undefined8 *)(param_1 + 0xe0),1);
    return;
  case 0x11:
    FUN_00c106e0(*(undefined8 *)(param_1 + 0x100));
    return;
  case 0x37:
    FUN_00c09530(*(undefined8 *)(param_1 + 0xe8),0);
    return;
  case 0x38:
    FUN_00c09530(*(undefined8 *)(param_1 + 0xe8),1);
    return;
  case 0x39:
    FUN_00c09530(*(undefined8 *)(param_1 + 0xe8),2);
    return;
  case 0x3a:
    FUN_00c09530(*(undefined8 *)(param_1 + 0xe8),3);
    return;
  case 0x3b:
    FUN_00c09530(*(undefined8 *)(param_1 + 0xe8),4);
    return;
  case 0x3c:
    FUN_00c09530(*(undefined8 *)(param_1 + 0xe8),5);
    return;
  case 0x3d:
    FUN_00c09530(*(undefined8 *)(param_1 + 0xe8),6);
    return;
  case 0x3e:
    FUN_00c09530(*(undefined8 *)(param_1 + 0xe8),7);
    return;
  case 0x42:
  case 0x43:
    FUN_00bf97f0(*(undefined8 *)(param_1 + 0xe0),0);
    return;
  case 100:
  case 0x65:
    FUN_00c164e0(*(undefined8 *)(param_1 + 0xd8));
    return;
  case 0x6d:
  case 0x6e:
    FUN_00bf97f0(*(undefined8 *)(param_1 + 0xe0),2);
    return;
  }
}


