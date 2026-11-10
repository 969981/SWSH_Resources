/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00865c70; name: FUN_00865c70
 */


void FUN_00865c70(void)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_00880970();
  FUN_008643e0();
  FUN_008660a0();
  puVar1 = PTR_DAT_02717358;
  lVar2 = *(long *)PTR_DAT_02717358;
  *(undefined8 *)PTR_DAT_02717358 = 0;
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(lVar2 + 0x270) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x270) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x270) = 0;
  }
  if ((*(long *)(lVar2 + 0x250) != 0) && (*(long *)(lVar2 + 0x238) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x238) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x238) = 0;
  }
  *(undefined8 *)(lVar2 + 0x238) = 0;
  *(undefined8 *)(lVar2 + 0x240) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x248) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x250) = 0;
  if (*(long *)(lVar2 + 600) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 600) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 600) = 0;
  }
  *(undefined8 *)(lVar2 + 600) = 0;
  *(undefined4 *)(lVar2 + 0x260) = 0;
  if ((*(long *)(lVar2 + 0x220) != 0) && (*(long *)(lVar2 + 0x208) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x208) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x208) = 0;
  }
  *(undefined8 *)(lVar2 + 0x208) = 0;
  *(undefined8 *)(lVar2 + 0x210) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x218) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x220) = 0;
  if (*(long *)(lVar2 + 0x228) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x228) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x228) = 0;
  }
  *(undefined8 *)(lVar2 + 0x228) = 0;
  *(undefined4 *)(lVar2 + 0x230) = 0;
  if ((*(long *)(lVar2 + 0x1f0) != 0) && (*(long *)(lVar2 + 0x1d8) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x1d8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x1d8) = 0;
  }
  *(undefined8 *)(lVar2 + 0x1d8) = 0;
  *(undefined8 *)(lVar2 + 0x1e0) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x1e8) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x1f0) = 0;
  if (*(long *)(lVar2 + 0x1f8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x1f8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x1f8) = 0;
  }
  *(undefined8 *)(lVar2 + 0x1f8) = 0;
  *(undefined4 *)(lVar2 + 0x200) = 0;
  if ((*(long *)(lVar2 + 0x1c0) != 0) && (*(long *)(lVar2 + 0x1a8) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x1a8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x1a8) = 0;
  }
  *(undefined8 *)(lVar2 + 0x1a8) = 0;
  *(undefined8 *)(lVar2 + 0x1b0) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x1b8) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x1c0) = 0;
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x1c8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x1c8) = 0;
  }
  *(undefined8 *)(lVar2 + 0x1c8) = 0;
  *(undefined4 *)(lVar2 + 0x1d0) = 0;
  if ((*(long *)(lVar2 + 400) != 0) && (*(long *)(lVar2 + 0x178) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x178) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x178) = 0;
  }
  *(undefined8 *)(lVar2 + 0x178) = 0;
  *(undefined8 *)(lVar2 + 0x180) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x188) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 400) = 0;
  if (*(long *)(lVar2 + 0x198) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x198) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x198) = 0;
  }
  *(undefined8 *)(lVar2 + 0x198) = 0;
  *(undefined4 *)(lVar2 + 0x1a0) = 0;
  if ((*(long *)(lVar2 + 0x160) != 0) && (*(long *)(lVar2 + 0x148) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x148) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x148) = 0;
  }
  *(undefined8 *)(lVar2 + 0x148) = 0;
  *(undefined8 *)(lVar2 + 0x150) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x158) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x160) = 0;
  if (*(long *)(lVar2 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x168) = 0;
  }
  *(undefined8 *)(lVar2 + 0x168) = 0;
  *(undefined4 *)(lVar2 + 0x170) = 0;
  if ((*(long *)(lVar2 + 0x130) != 0) && (*(long *)(lVar2 + 0x118) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x118) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x118) = 0;
  }
  *(undefined8 *)(lVar2 + 0x118) = 0;
  *(undefined8 *)(lVar2 + 0x120) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x128) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x130) = 0;
  if (*(long *)(lVar2 + 0x138) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x138) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x138) = 0;
  }
  *(undefined8 *)(lVar2 + 0x138) = 0;
  *(undefined4 *)(lVar2 + 0x140) = 0;
  if ((*(long *)(lVar2 + 0x100) != 0) && (*(long *)(lVar2 + 0xe8) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xe8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xe8) = 0;
  }
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined8 *)(lVar2 + 0xf0) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0xf8) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x100) = 0;
  if (*(long *)(lVar2 + 0x108) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x108) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x108) = 0;
  }
  *(undefined8 *)(lVar2 + 0x108) = 0;
  *(undefined4 *)(lVar2 + 0x110) = 0;
  if ((*(long *)(lVar2 + 0xd0) != 0) && (*(long *)(lVar2 + 0xb8) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb8) = 0;
  }
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 200) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  if (*(long *)(lVar2 + 0xd8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xd8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xd8) = 0;
  }
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  *(undefined4 *)(lVar2 + 0xe0) = 0;
  if ((*(long *)(lVar2 + 0xa0) != 0) && (*(long *)(lVar2 + 0x88) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x88) = 0;
  }
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x98) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  if (*(long *)(lVar2 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xa8) = 0;
  }
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined4 *)(lVar2 + 0xb0) = 0;
  if ((*(long *)(lVar2 + 0x70) != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x58) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x58) = 0;
  }
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x68) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  if (*(long *)(lVar2 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x78) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x78) = 0;
  }
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined4 *)(lVar2 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00866018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar1 + 8) + 0x18))
            (*(long **)(puVar1 + 8),lVar2,*(undefined8 *)(puVar1 + 0x10),
             *(undefined8 *)(puVar1 + 0x18));
  return;
}


