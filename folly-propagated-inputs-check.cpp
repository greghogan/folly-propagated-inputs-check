/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Headers from Folly's installation "include" path:
 *   find folly -type f \( \! -path "*test*" \! -name "*-inl.h" \) -exec echo "#include <{}>" \; | sort > ~/folly-propagated-inputs-check/folly-propagated-inputs-check.h
 */

#include "folly-propagated-inputs-check.h"

/*
 * List of public headers:
 *   https://github.com/facebook/folly/blob/master/folly/docs/Overview.md
 */

#include <folly/memory/Arena.h>
#include <folly/memory/ThreadCachedArena.h>

#include <folly/AtomicHashArray.h>
#include <folly/AtomicHashMap.h>
#include <folly/AtomicIntrusiveLinkedList.h>
#include <folly/AtomicLinkedList.h>
#include <folly/AtomicUnorderedMap.h>

#include <folly/fibers/Baton.h>

#include <folly/Benchmark.h>

#include <folly/Bits.h>

#include <folly/ConcurrentSkipList.h>

#include <folly/Conv.h>

#include <folly/Demangle.h>

#include <folly/DiscriminatedPtr.h>

#include <folly/dynamic.h>

#include <folly/container/EvictingCacheMap.h>

#include <folly/FBString.h>

#include <folly/FBVector.h>

#include <folly/File.h>

#include <folly/Fingerprint.h>

#include <folly/Function.h>

#include <folly/futures/Future.h>

#include <folly/Format.h>

#include <folly/gen/Base.h>
#include <folly/gen/Combine.h>
#include <folly/gen/Core.h>
#include <folly/gen/File.h>
#include <folly/gen/IStream.h>
#include <folly/gen/Parallel.h>
#include <folly/gen/ParallelMap.h>
#include <folly/gen/String.h>

#include <folly/GroupVarint.h>

#include <folly/IPAddress.h>

#include <folly/io/Cursor.h>
#include <folly/io/GlobalShutdownSocketSet.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <folly/io/RecordIO.h>
#include <folly/io/ShutdownSocketSet.h>
#include <folly/io/SocketOptionMap.h>
#include <folly/io/TypedIOBuf.h>

#include <folly/Hash.h>

#include <folly/stats/Histogram.h>

#include <folly/IntrusiveList.h>

#include <folly/json.h>

#include <folly/Likely.h>

#include <folly/memory/Malloc.h>
#include <folly/Memory.h>

#include <folly/MicroSpinLock.h>

#include <folly/MPMCQueue.h>
#include <folly/MPMCPipeline.h>

#include <folly/PackedSyncPtr.h>

#include <folly/Poly.h>

#include <folly/Preprocessor.h>

#include <folly/ProducerConsumerQueue.h>

#include <folly/Random.h>

#include <folly/Range.h>

#include <folly/RWSpinLock.h>

#include <folly/ScopeGuard.h>

#include <folly/Singleton.h>

#include <folly/synchronization/SmallLocks.h>

#include <folly/small_vector.h>

#include <folly/sorted_vector_types.h>

#include <folly/stats/BucketedTimeSeries.h>
#include <folly/stats/Histogram.h>
#include <folly/stats/MultiLevelTimeSeries.h>
#include <folly/stats/QuantileEstimator.h>
#include <folly/stats/TDigest.h>
#include <folly/stats/TimeseriesHistogram.h>

//#include <folly/StlAllocator.h>

#include <folly/String.h>

#include <folly/Subprocess.h>

#include <folly/Synchronized.h>

//#include <folly/System.h>

#include <folly/ThreadCachedInt.h>

#include <folly/ThreadLocal.h>

#include <folly/TimeoutQueue.h>

#include <folly/Traits.h>

#include <folly/Unicode.h>

#include <folly/Uri.h>

int main(int argc, char *argv[]) {}
