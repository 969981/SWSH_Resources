/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044f860; name: FUN_0044f860
 */


void FUN_0044f860(float param_1,long param_2,undefined4 param_3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  uVar1 = *(ushort *)(param_2 + 0x154);
  if ((uVar1 >> 0xb & 1) == 0) {
    switch(param_3) {
    case 0x12:
      *(float *)(param_2 + 0x110) = *(float *)(param_2 + 0x110) + param_1;
      return;
    case 0x13:
      *(float *)(param_2 + 0x114) = *(float *)(param_2 + 0x114) + param_1;
      return;
    case 0x14:
      if (*(long *)(param_2 + 0x140) != 0) {
        fVar4 = (float)FUN_0044faf0(param_2);
        *(float *)(*(long *)(param_2 + 0x140) + 0x1c) =
             *(float *)(*(long *)(param_2 + 0x140) + 0x1c) + fVar4;
        return;
      }
      break;
    case 0x15:
      if (*(long *)(param_2 + 0x140) != 0) {
        fVar4 = (float)FUN_0044faf0(param_2);
        *(float *)(*(long *)(param_2 + 0x140) + 0x24) =
             *(float *)(*(long *)(param_2 + 0x140) + 0x24) + fVar4;
        return;
      }
      break;
    case 0x16:
      if (*(long *)(param_2 + 0x140) != 0) {
        fVar4 = (float)FUN_0044faf0(param_2);
        *(float *)(*(long *)(param_2 + 0x140) + 0x20) =
             *(float *)(*(long *)(param_2 + 0x140) + 0x20) + fVar4;
        return;
      }
      break;
    case 0x17:
      uVar3 = (uint)param_1;
      *(ushort *)(param_2 + 0x154) =
           uVar1 & 0xffe0 |
           uVar1 & 0xc | (ushort)uVar3 & 3 | ((ushort)((uVar1 & 3) != uVar3) | uVar1 >> 4 & 1) << 4;
      if ((((uVar3 & 3) == 1) && (*(long *)(param_2 + 0x140) == 0)) &&
         (FUN_00488880(*(undefined8 *)(param_2 + 0x148),param_2 + 0x140,param_2 + 0x10,auStack_14,
                       auStack_18,param_2 + 0x110), *(long *)(param_2 + 0x140) == 0)) {
        *(ushort *)(param_2 + 0x154) = *(ushort *)(param_2 + 0x154) & 0xfffc;
        return;
      }
      break;
    case 0x18:
      *(float *)(param_2 + 0x118) = param_1;
      return;
    default:
      lVar2 = *(long *)(param_2 + 0x140);
      if (lVar2 != 0) {
        switch(param_3) {
        case 0x2e:
          FUN_0044e9b0(param_2);
          return;
        case 0x41:
          *(byte *)(lVar2 + 0x4c) = *(byte *)(lVar2 + 0x4c) & 0xef | (param_1 != 0.0) << 4;
          return;
        case 0x42:
          *(byte *)(lVar2 + 0x4c) = *(byte *)(lVar2 + 0x4c) & 0xbf | (param_1 != 0.0) << 6;
          return;
        case 0x43:
          FUN_00463030(lVar2,(int)param_1);
          return;
        case 0x44:
          *(int *)(lVar2 + 0x28) = (int)param_1;
          return;
        }
      }
      break;
    case 0x40:
      *(bool *)(param_2 + 0x11c) = 0.0 < param_1;
      break;
    case 0x45:
      *(bool *)(param_2 + 0x11d) = 0.0 < param_1;
      return;
    }
  }
  return;
}


