/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052baa0; name: FUN_0052baa0
 */


undefined8 FUN_0052baa0(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_3c [4];
  float local_38;
  float local_34;
  
  if (*(long *)(param_1 + 0x198) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x248) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x24c) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x250) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x254) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x264) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x268) = 0;
    if ((*(long *)(param_1 + 0x198) != 0) && (*(char *)(*(long *)(param_1 + 0x1a0) + 0x184) != '\0')
       ) {
      local_34 = *(float *)(*(long *)(param_1 + 0x1a0) + 0x1a8);
      fVar2 = *(float *)(param_1 + 0x6d0);
      fVar1 = (float)FUN_005afb40();
      local_38 = *(float *)(*(long *)(param_1 + 0x1a0) + 0x1b4);
      if (*(float *)(param_1 + 0x884) != 1.0) {
        fVar2 = tanf(*(float *)(param_1 + 0x888) * 0.5);
        fVar3 = powf(*(float *)(param_1 + 0x6d0) / fVar2,*(float *)(param_1 + 0x884));
        fVar2 = fVar2 * fVar3;
        fVar3 = atanf(fVar2);
        if ((DAT_0275cc3d & 1) == 0) {
          DAT_0275cc3d = 1;
          DAT_0275cd38 = 0x100000000;
          DAT_0275cd40 = 0x300000002;
        }
        FUN_005af0d0(fVar3 + fVar3,*(undefined4 *)(param_1 + 0x898),*(undefined4 *)(param_1 + 0x89c)
                     ,*(undefined4 *)(param_1 + 0x8a4),*(undefined4 *)(param_1 + 0x8a8),
                     *(undefined4 *)(param_1 + 0x8ac),*(undefined4 *)(param_1 + 0x8b8),
                     *(undefined4 *)(param_1 + 0x8bc),*(undefined8 *)(param_1 + 0x1a0),
                     *(undefined4 *)((long)&DAT_0275cd38 + (ulong)*(uint *)(param_1 + 0x8a0) * 4),
                     &local_34,&local_38,0,auStack_3c,0,0,0);
      }
      fVar3 = *(float *)(param_1 + 0x88c);
      if (fVar3 <= 0.0) {
        fVar3 = local_38;
      }
      fVar4 = *(float *)(param_1 + 0x890);
      if (*(float *)(param_1 + 0x890) <= 0.0) {
        fVar4 = fVar1;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = fVar4 / fVar3;
      }
      *(float *)(*(long *)(param_1 + 0x198) + 0x248) = fVar4;
      *(float *)(*(long *)(param_1 + 0x198) + 0x24c) = local_34 / fVar3;
      *(float *)(*(long *)(param_1 + 0x198) + 0x250) = local_34;
      *(float *)(*(long *)(param_1 + 0x198) + 0x254) = fVar2;
      *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x264) =
           *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x1b0);
      *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x268) =
           *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x1b8);
      return 0;
    }
  }
  return 1;
}


