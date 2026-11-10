/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e3fb0; name: FUN_012e3fb0
 */


void FUN_012e3fb0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_1 + 0x510) = 0;
  *(undefined1 *)(param_1 + 0x520) = 0;
  *(undefined1 *)(param_1 + 0x530) = 0;
  *(undefined1 *)(param_1 + 0x540) = 0;
  *(undefined1 *)(param_1 + 0x550) = 0;
  *(undefined1 *)(param_1 + 0x560) = 0;
  *(undefined1 *)(param_1 + 0x570) = 0;
  *(undefined1 *)(param_1 + 0x580) = 0;
  *(undefined1 *)(param_1 + 0x590) = 0;
  *(undefined1 *)(param_1 + 0x5a0) = 0;
  *(undefined1 *)(param_1 + 0x5b0) = 0;
  *(undefined1 *)(param_1 + 0x5c0) = 0;
  *(undefined1 *)(param_1 + 0x5d0) = 0;
  *(undefined1 *)(param_1 + 0x5e0) = 0;
  *(undefined1 *)(param_1 + 0x5f0) = 0;
  *(undefined1 *)(param_1 + 0x600) = 0;
  *(undefined1 *)(param_1 + 0x610) = 0;
  *(undefined1 *)(param_1 + 0x620) = 0;
  *(undefined1 *)(param_1 + 0x630) = 0;
  *(undefined1 *)(param_1 + 0x640) = 0;
  *(undefined1 *)(param_1 + 0x650) = 0;
  *(undefined1 *)(param_1 + 0x660) = 0;
  *(undefined1 *)(param_1 + 0x670) = 0;
  *(undefined1 *)(param_1 + 0x680) = 0;
  *(undefined1 *)(param_1 + 0x690) = 0;
  *(undefined1 *)(param_1 + 0x6a0) = 0;
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  *(undefined1 *)(param_1 + 0x6c0) = 0;
  *(undefined1 *)(param_1 + 0x6d0) = 0;
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  *(undefined1 *)(param_1 + 0x6f0) = 0;
  *(undefined1 *)(param_1 + 0x700) = 0;
  uVar2 = FUN_0131cae0(param_1 + 0x370);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_012e4910(param_1);
    if ((uVar2 & 1) == 0) {
      uVar5 = 0x3f800000;
      if (((*(long *)(param_1 + 0x4f8) != 0) && (uVar2 = FUN_0130e360(), (uVar2 & 1) != 0)) &&
         (uVar1 = *(int *)(param_1 + 0x500) - 1, uVar1 < 4)) {
        uVar5 = *(undefined4 *)(&DAT_01d4a7e0 + (long)(int)uVar1 * 4);
      }
    }
    else {
      uVar5 = DAT_01d4bf70;
    }
  }
  else {
    uVar5 = DAT_01d4c050;
  }
  FUN_012e31f0(param_1,0xf30c61e6459b01fe);
  FUN_01313040(uVar5);
  uVar1 = FUN_0131ccf0(param_1 + 0x370);
  if (3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar4 = *(undefined8 *)(&DAT_01d4db00 + (long)(int)uVar1 * 8);
  uVar3 = FUN_012e31f0(param_1,0xdfd58313830a3328);
  FUN_01313000(uVar3,uVar4);
  return;
}


