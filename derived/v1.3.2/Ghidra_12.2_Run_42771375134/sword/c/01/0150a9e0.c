/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150a9e0; name: FUN_0150a9e0
 */


void FUN_0150a9e0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (((uint)param_2 < 0x20) && (param_3 < 0x1e)) {
    uVar2 = param_2 & 0xffffffff;
    uVar1 = FUN_0150a840(param_1,param_2,param_3,0);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x524) = 0xffff;
    }
    uVar1 = FUN_0150a840(param_1,uVar2,param_3,1);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x530) = 0xffff;
    }
    uVar1 = FUN_0150a840(param_1,uVar2,param_3,2);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x53c) = 0xffff;
    }
    uVar1 = FUN_0150a840(param_1,uVar2,param_3,3);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x548) = 0xffff;
    }
    uVar1 = FUN_0150a840(param_1,uVar2,param_3,4);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x554) = 0xffff;
    }
    uVar1 = FUN_0150a840(param_1,uVar2,param_3,5);
    if (uVar1 != 6) {
      *(undefined2 *)(param_1 + (ulong)uVar1 * 2 + 0x560) = 0xffff;
    }
  }
  return;
}


