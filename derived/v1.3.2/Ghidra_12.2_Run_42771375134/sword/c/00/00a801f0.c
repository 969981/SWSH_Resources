/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a801f0; name: FUN_00a801f0
 */


uint FUN_00a801f0(long *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    return param_2;
  case 7:
    return *(uint *)(param_1 + 0x2e4);
  case 8:
    return *(uint *)((long)param_1 + 0x1724);
  case 9:
    uVar2 = *(undefined4 *)((long)param_1 + 0x16fc);
    break;
  case 10:
    uVar2 = *(undefined4 *)((long)param_1 + (long)param_3 * 4 + 0x1704);
    break;
  case 0xb:
    uVar2 = (undefined4)param_1[0x2e0];
    break;
  default:
    return 0xff;
  }
  uVar1 = (**(code **)(*param_1 + 0x8f8))(param_1,uVar2);
  return uVar1 & 0xff;
}


