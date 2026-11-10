/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011efc50; name: FUN_011efc50
 */


void FUN_011efc50(long param_1,long param_2)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_async_data_holder.pb.cc"
                 ,0x372);
  }
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    if (*(int *)(param_1 + 0x24) == 1) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 1;
      pvVar3 = operator_new(0x28);
      FUN_011e8230();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 1) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011e8480();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0x261);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 2:
    if (*(int *)(param_1 + 0x24) == 2) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      pvVar3 = operator_new(0x28);
      FUN_011e8a70();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 2) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011e8cc0();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0x371);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 3:
    break;
  case 4:
    if (*(int *)(param_1 + 0x24) == 4) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 4;
      pvVar3 = operator_new(0x28);
      FUN_011e9a80();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 4) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011e9cd0();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0x591);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 5:
    if (*(int *)(param_1 + 0x24) == 5) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 5;
      pvVar3 = operator_new(0x28);
      FUN_011ea2c0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 5) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011ea510();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0x6a1);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 6:
    if (*(int *)(param_1 + 0x24) == 6) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 6;
      pvVar3 = operator_new(0x28);
      FUN_011eaa90();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 6) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011eace0();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0x7b1);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 7:
    if (*(int *)(param_1 + 0x24) == 7) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 7;
      pvVar3 = operator_new(0x28);
      FUN_011eb2d0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 7) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011eb520();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0x8c1);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 8:
    if (*(int *)(param_1 + 0x24) == 8) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 8;
      pvVar3 = operator_new(0x28);
      FUN_011ebaa0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 8) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011ebcf0();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0x9d1);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 9:
    if (*(int *)(param_1 + 0x24) == 9) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 9;
      pvVar3 = operator_new(0x28);
      FUN_011ec2e0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 9) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011ec530();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0xae1);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 10:
    if (*(int *)(param_1 + 0x24) == 10) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 10;
      pvVar3 = operator_new(0x28);
      FUN_011ecab0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 10) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011ecd00();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0xbf1);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 0xb:
    if (*(int *)(param_1 + 0x24) == 0xb) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xb;
      pvVar3 = operator_new(0x28);
      FUN_011ed2f0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 0xb) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011ed540();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0xd01);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 0xc:
    if (*(int *)(param_1 + 0x24) == 0xc) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xc;
      pvVar3 = operator_new(0x28);
      FUN_011edb30();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 0xc) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011edd80();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0xe11);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 0xd:
    if (*(int *)(param_1 + 0x24) == 0xd) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xd;
      pvVar3 = operator_new(0x28);
      FUN_011ee370();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 0xd) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011ee5c0();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0xf21);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 0xe:
    if (*(int *)(param_1 + 0x24) == 0xe) {
      pvVar3 = *(void **)(param_1 + 0x18);
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_011f0380(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xe;
      pvVar3 = operator_new(0x28);
      FUN_011eeb40();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 0xe) {
        pvVar2 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar2 = (void *)FUN_011eed90();
      }
    }
    if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                   ,0x1031);
    }
    bVar1 = **(byte **)((long)pvVar2 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    pvVar3 = *(void **)(param_1 + 0x18);
    pvVar2 = *(void **)(param_2 + 0x18);
  }
  else {
    FUN_011f0380(param_1);
    *(undefined4 *)(param_1 + 0x24) = 3;
    pvVar3 = operator_new(0x28);
    FUN_011e9240();
    *(void **)(param_1 + 0x18) = pvVar3;
    if (*(int *)(param_2 + 0x24) == 3) {
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar2 = (void *)FUN_011e9490();
    }
  }
  if (pvVar2 == pvVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                 ,0x481);
  }
  bVar1 = **(byte **)((long)pvVar2 + 0x18);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)((long)pvVar2 + 0x18) + 8) == 0) {
    return;
  }
  FUN_00860e40((long)pvVar3 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


