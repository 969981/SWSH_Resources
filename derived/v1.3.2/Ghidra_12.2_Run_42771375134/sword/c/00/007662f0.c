/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007662f0; name: FUN_007662f0
 */


void FUN_007662f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x20000bb80;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x240) = 0x10;
  *(undefined4 *)(param_1 + 0x26c) = 0x10;
  *(undefined4 *)(param_1 + 0x270) = 0x2000;
  *(undefined4 *)(param_1 + 0x274) = 0x1000;
  *(undefined8 *)(param_1 + 0x2e8) = 5;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0x8000;
  *(undefined1 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 0x342) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x20000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  puVar1 = PTR_DAT_02710860;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0x20000;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x368) = 0;
    return;
  }
  uVar3 = 0;
  if (*(long *)(lVar2 + 0x80) != 0) {
    uVar3 = *(undefined8 *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
  }
  *(undefined8 *)(param_1 + 0x368) = uVar3;
  return;
}


