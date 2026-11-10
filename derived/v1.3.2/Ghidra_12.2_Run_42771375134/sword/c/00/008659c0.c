/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008659c0; name: FUN_008659c0
 */


void FUN_008659c0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x298,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *(undefined1 **)(lVar1 + 0x68) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0x98) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 200) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0xb8) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0xf8) = &DAT_01d38550;
  *(undefined1 **)(lVar1 + 0x128) = &DAT_01d38550;
  *(undefined1 **)(lVar1 + 0x158) = &DAT_01d38550;
  *(undefined1 **)(lVar1 + 0x188) = &DAT_01d38550;
  *(undefined1 **)(lVar1 + 0x1b8) = &DAT_01d38550;
  *(undefined1 **)(lVar1 + 0x1e8) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x210) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0x218) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x240) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0x248) = &DAT_01d38550;
  *(undefined4 *)(lVar1 + 0x80) = 0;
  *(undefined4 *)(lVar1 + 0xb0) = 0;
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined4 *)(lVar1 + 0x110) = 0;
  *(undefined4 *)(lVar1 + 0x140) = 0;
  *(undefined4 *)(lVar1 + 0x170) = 0;
  *(undefined4 *)(lVar1 + 0x1a0) = 0;
  *(undefined4 *)(lVar1 + 0x1d0) = 0;
  *(undefined4 *)(lVar1 + 0x200) = 0;
  *(undefined8 *)(lVar1 + 0x208) = 0;
  *(undefined4 *)(lVar1 + 0x230) = 0;
  *(undefined8 *)(lVar1 + 0x228) = 0;
  *(undefined8 *)(lVar1 + 0x220) = 0;
  *(undefined8 *)(lVar1 + 0x238) = 0;
  *(undefined4 *)(lVar1 + 0x260) = 0;
  *(undefined8 *)(lVar1 + 600) = 0;
  *(undefined8 *)(lVar1 + 0x250) = 0;
  *(undefined8 *)(lVar1 + 0x270) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x148) = 0;
  *(undefined8 *)(lVar1 + 0x150) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x178) = 0;
  *(undefined8 *)(lVar1 + 0x180) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x1a8) = 0;
  *(undefined8 *)(lVar1 + 0x1b0) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x1d8) = 0;
  *(undefined8 *)(lVar1 + 0x1e0) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0;
  *(undefined8 *)(lVar1 + 0x138) = 0;
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 400) = 0;
  *(undefined8 *)(lVar1 + 0x198) = 0;
  *(undefined8 *)(lVar1 + 0x1c0) = 0;
  *(undefined8 *)(lVar1 + 0x1c8) = 0;
  *(undefined8 *)(lVar1 + 0x1f0) = 0;
  *(undefined8 *)(lVar1 + 0x1f8) = 0;
  *param_1 = lVar1;
  param_1[1] = (long)param_2;
  param_1[2] = 0x298;
  param_1[3] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return;
}


