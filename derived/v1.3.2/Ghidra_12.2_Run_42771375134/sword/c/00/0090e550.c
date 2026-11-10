/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090e550; name: FUN_0090e550
 */


undefined4 FUN_0090e550(long param_1,undefined4 param_2,void *param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  uint local_3c;
  void *local_38;
  
  FUN_008da630(*(undefined8 *)(param_1 + 0x608));
  FUN_00915300();
  local_38 = (void *)0x0;
  local_3c = 0;
  switch(param_2) {
  case 1:
    uVar2 = *(undefined8 *)(param_1 + 0x5e8);
    uVar4 = *(undefined2 *)(param_1 + 0x78);
    uVar3 = 9;
    break;
  case 2:
    uVar2 = *(undefined8 *)(param_1 + 0x5e8);
    uVar4 = *(undefined2 *)(param_1 + 0x78);
    uVar3 = 10;
    break;
  case 3:
    uVar2 = *(undefined8 *)(param_1 + 0x5e8);
    uVar4 = *(undefined2 *)(param_1 + 0x78);
    uVar3 = 0xb;
    break;
  case 4:
    uVar2 = *(undefined8 *)(param_1 + 0x5e8);
    uVar4 = *(undefined2 *)(param_1 + 0x78);
    uVar3 = 7;
    break;
  case 5:
    uVar2 = *(undefined8 *)(param_1 + 0x5e8);
    uVar4 = *(undefined2 *)(param_1 + 0x78);
    uVar3 = 8;
    break;
  default:
    goto switchD_0090e5a4_default;
  }
  FUN_009188d0(uVar2,&local_38,&local_3c,uVar3,uVar4);
switchD_0090e5a4_default:
  if ((local_3c == param_4) && (iVar1 = memcmp(local_38,param_3,(ulong)param_4), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


